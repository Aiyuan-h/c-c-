/*
 * 第一个节点为1，其子节点为1*2=2，另外一个子节点为3，意思是第n个节点，其子节点为2*n，2*n+1
 * 第一个节点为0的话，这里就有问题了！
 * 时间复杂度为O(nlogn)
 */
#include <stdio.h>
void heap_sort(int *p);
void heap_adjust(int *p,int s,int m);
int main(void)
{
    int i;
    int a[10]={0,50,10,90,30,70,40,80,60,20};
    heap_sort(a);
    for(i=1;i<=9;++i){
        printf("%d ",a[i]);
    }
    return 0;
}
void heap_sort(int *p)
{
    int i,temp;
    //step1：序列构建成大根堆，根节点肯定为最大值
    for(i=9/2;i>0;--i){ //二叉树性质：n个节点，有n/2取整个非终端节点（叶子节点），i为非终端节点4，3，2，1
        heap_adjust(p,i,9);  //将每个非终端节点及其子节点从下到上调整为大根堆
    }

    for(i=1;i<=9;++i){
        printf("%d ",p[i]);
    }
    printf("\n");
    //step2：遍历最大元素移动到末端
    for(i=9;i>1;--i){ //调整到i=2
        temp=p[1];
        p[1]=p[i];
        p[i]=temp;
        heap_adjust(p,1,i-1);//i-1为最大值放在了堆尾，不需要排序了，并且知识根节点不满足大顶堆要求，每次只要调整根节点
    }
}

void heap_adjust(int *p,int s,int m)
{
    int temp,j;
    temp=p[s]; //不能放在循环体内
    for(j=2*s;j<=m;j*=2){//j=j*2,意思是：根节点与堆尾进行交换后，进行大根堆构建时，可能构建的大根堆的非终端节点小于其子节点，需要继续构建，就可能需要两次循环
        if(j<m && p[j]<p[j+1]){
            ++j;
        }
        if(temp>=p[j]){
            break;
        }
        p[s]=p[j];
        s=j; //这句别漏掉
    }
    p[s]=temp;
}

/*
 * 特点：
 * (1)不断的交换完成最终的排序
 * (2)最好的情况时间复杂度为O(n)，最坏的情况时间复杂度为O(n2)
 * (3)设置哨兵标记来有效的减少相对有序的数列的排序多余比较次数
 */
#include <stdio.h>
#include<stdlib.h>
#define false 0;
#define true 1;
void bubble_sort(int *p);

int main(void)
{
    int i;
    int a[10]={3,2,4,6,7,9,0,8,1,5};
    bubble_sort(a);
    for(i=0;i<10;++i){
        printf("%d ",a[i]);
    }
    return 0;
}

void bubble_sort(int *p)
{
    int i,j,k,temp,count=0;
    int flag=true;
    for(i=0;i<10 && flag;++i){
        flag=false;
        for(j=9;j>i;--j){
            if(p[j]<p[j-1]){
                flag=true;
                temp=p[j-1];
                p[j-1]=p[j];
                p[j]=temp;
            }
            count++;
        }
        for(k=0;k<10;++k){
            printf("%d ",p[k]);
        }
        printf("  %d\n",i);
    }
    printf("%d\n",count);
}


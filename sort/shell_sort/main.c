/*
 * (1)shell排序基本思想跟插入排序是一样的，只是插入排序增量为1，shell排序增量大于1，
 *  将插入排序的增量1变为增量increment，再加上外层循环增量判断就可以了
 * (2)突破了简单排序算法的时间复杂度O(n2)的限制
 */
#include <stdio.h>
void shell_sort(int *p);
int main(void)
{
    int i;
    int a[10]={3,2,4,6,7,9,0,8,1,5};
    shell_sort(a);
    for(i=0;i<10;++i){
        printf("%d ",a[i]);
    }
    return 0;
}

void shell_sort(int *p)
{
    int i,j,increment=10;
    int temp;
    while(increment>1){ //增量为1时停止循环
        increment/=2;   //确定增量值
        for(i=increment;i<10;++i){//带有增量的插入排序
            if(p[i]<p[i-increment]){//需要插入数据到子表
                temp = p[i];
                j = i - increment;
                for(;j >= 0 && temp<p[j];j-=increment){ //将直接插入排序的增量1改为increment
                    p[j+increment]=p[j];                //由于shell排序是一一比较这里每次只keneng进入一次？
                }
                p[j+increment] = temp;
            }
        }
    }
}

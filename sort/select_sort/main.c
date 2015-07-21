/*
 *简单选择排序比冒泡排序的优势在于：
 * 交换移动的次数相当少，只需要比较操作，节约了交换的时间
 * 时间复杂度为O(n2)
 */

#include <stdio.h>
void select_sort(int *p);
int main(void)
{
    int i;
    int a[10]={3,2,4,6,7,9,0,8,1,5};
    select_sort(a);
    for(i=0;i<10;++i){
        printf("%d ",a[i]);
    }
    return 0;
}

void select_sort(int *p)
{
    int i,j,temp,min;
    for(i=0;i<10;++i){
        min=i;
        for(j=i+1;j<10;++j){
            if(p[j]<p[min]){
                min=j;
            }
        }
        if(i!=min){
            temp=p[min];
            p[min]=p[i];
            p[i]=temp;
        }
    }
}

#include <stdio.h>

void insert_sort(int *p);
int main(void)
{
    int i;
    int a[10]={3,2,4,6,7,9,0,8,1,5};
    insert_sort(a);
    for(i=0;i<10;++i){
        printf("%d ",a[i]);
    }
    return 0;
}

void insert_sort(int *p)
{
    int i,j,temp;
    for(i=1;i<10;++i){
        if(p[i]<p[i-1]){
            temp=p[i];  // 保存该点的值，等会要将该值插入适当位置
            j=i-1;      // j开始为i前面的一个值
            for(;j >= 0 && temp<p[j];--j){ //j--一次,数组i之前的元素就往后移一位，i当前值保存在temp中，元素向后移的一位填空到i的位置
                p[j+1]=p[j];               //j必须大于等于0
            }
            p[j+1]=temp;//退出循环标志着，temp找到了插入的位置
        }
    }
}



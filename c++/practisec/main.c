#include <stdio.h>
int main()
{
    int n;
    int i=0;
    int *sum;
    int *ptr;
    sum=(int*)malloc(sizeof(int));
    ptr=sum;
    while(scanf("%d",&n)!=EOF){
        *sum=(1+n)*n/2;
        sum++;
        i++;
    }
    for(;i>0;i--)
        printf("%d\r\n",*ptr++);
    free(ptr);
}


#include <stdio.h>
int fib(int n);
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
 int fib(int n)
 {
     int s;
     if(n==1 || n==2){
         return 1;
     }else{
         s=fib(n-1)+fib(n-2);
         return s;
     }
 }


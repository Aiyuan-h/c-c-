#include <stdio.h>
#include<time.h>
#include<conio.h>
#include<dos.h>


void delay(long int n);
int main(void)
{
    time_t first,second;
    first=time(NULL);
    delay(2000000000);
    second=time(NULL);
    printf("%f\n",difftime(second,first));
    return 0;
}

void delay(long int n)
{
   long int i;
    long int j;
    for(i=0;i<n;i++);
        for(j=0;j<1000000;j++);
}


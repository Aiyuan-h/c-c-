#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>
void call();
int main(void)
{
    int i;
    i++;
    printf("i=%d\n",i);
    while(1)
    {
        call();
    }
    printf("asdasdasda");
    return 0;
}

void call()
{
    printf("sdfsafsa\n");
    sleep(1);
  exit(0);
    return 0;
}

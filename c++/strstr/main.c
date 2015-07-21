#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    char str[]="1234xyz";
    char buff[20];
    char *str1=strstr(str,"34");
    printf("%s\n",str1);
    sscanf(str1,"4%s",buff);
    printf("%s",buff);
    return 0;
}


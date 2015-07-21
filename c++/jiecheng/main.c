#include <stdio.h>

int main(void)
{   int ch;


    int str[2][2]={
        {1,2},
        {3,4}
    };
    int (*p)[2]=str;
    int a=10;\
    int *b=&a;
    int **c=&b;

    char const *keyword[]={
        "do",
        "for",
        "if",
        "register"
    };



    //printf("%d",factorial(4));
  //  gets(str);
 //   printf("%c\n",getchar());
 //   getchar();
//    if((ch=getchar())!=EOF)
//    {
//        printf("sdf");
//    }
  //  fflush(stdin);
  //  printf("%c",getchar());
  //  getchar();
//    int *ap=str+2;
  //  printf("%d",sizeof());//strlen("sdd")
  //  printf("%d",*(*(str+1)+1));
     printf("%d",**str);
    return 0;
}
int factorial(int n)
{
    if(n<=0)
        return 1;
    else {
        return n*factorial(n-1);
    }
}

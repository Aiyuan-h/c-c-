#include <stdio.h>
#include<stdlib.h>

int sadf(void *ptr);
int main(int argc,char **argv)
{
//int i=20;
//int *pi=&i;
//int **ppi=&pi;
//int ***pppi=&ppi;
//int (*p)(int *)=sadf;

//void *ppt;
//int *tt=ppt;
//printf("%d",***pppi);
//p(pi);
//sscanf("4","%d",pi);
//printf("%d",i);

    while(*++argv!=NULL)
    printf("%s\n",*argv);

//char *buf=malloc(sizeof(char));
//sscanf("hello world","%*c%s",buf);
//printf("%s",buf);


//scanf("%4s",buf);


//printf("asdas");
//while(1)
//{

//}
//printf("%.10s\n","ABCFGH");
//printf("%d\n",buf);
//printf("%x\n",buf);

//int x=5;
//int y=-2;
//div_t z;
//z=div(x,y);
//printf("%d %d",z.quot,z.rem);


    return 0;
}

int sadf(void *ptr)
{

    int *pt;
    pt=ptr;
    printf("%d",*pt);
    return 0;
}








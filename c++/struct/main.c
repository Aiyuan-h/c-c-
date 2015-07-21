#include <stdio.h>


//struct {
//    int a;
//    char b;
//    float c;
//}x;
typedef struct{
    int a;
    char b[3];
    int *d;
}simple;


int main(void)
{   int *p;
    simple x={10,"hi",0};
    simple *px=&x;
    p=&px->a;
    printf("%s",*(px->d));
    return 0;
}


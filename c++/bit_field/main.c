#include <stdio.h>

main()

{

  struct bs

  {

    unsigned char a:1;

    unsigned char b:3;

    unsigned char c:4;

  } bit,*pbit;

  bit.a=1;

  bit.b=7;

  bit.c=15;

  printf("%d,%d,%d ",bit.a,bit.b,bit.c);

  pbit=&bit;

  pbit->a=0;

  pbit->b&=3;

  pbit->c|=1;

  printf("%d,%d,%d ",pbit->a,pbit->b,pbit->c);

}



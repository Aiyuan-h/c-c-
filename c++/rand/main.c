#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define TRUE 1
#define FALSE 0
int main(void)
{


    long int i=0;
    srand((unsigned int)time(NULL));
    while(TRUE)
    {

        for(i=0;i<100000000;i++)
            ;
        printf("%d\r\n",rand()%10);
    }

    return 0;
}

void shuffle(int *deck ,int n_cards)
{
    int i;
    static int first_time=TRUE;


    if(first_time){
        first_time=FALSE;
        srand((unsigned int)time(NULL));
    }

    for(i=n_cards-1;i>0;i-=1){
        int where;
        int temp;

        where=rand()%i;
        temp=deck[where];
        deck[where]=deck[i];
        deck[i]=temp;
    }
}


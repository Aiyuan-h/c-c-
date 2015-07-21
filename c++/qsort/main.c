#include <stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    char key[10];
    int other_data;
}record;
int r_compare(void const *a,void const *b);
int main(void)
{   int i;
    record array[50];
    for(i=0;i<50;i++)
        array[i].;
    qsort(array,50,sizeof(record),r_compare);
    return EXIT_SUCCESS;
}

int r_compare(void const *a,void const *b){
    return strcmp(((record *)a)->key,((record*)b)->key);
}

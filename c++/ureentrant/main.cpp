#include<stdio.h>
#include<string.h>
#define INFO_MAX_SZ 255

using namespace std;

int main()
{
   int in=0;
   char buffer[INFO_MAX_SZ]="Fred male 25,John male 62,Anna female 16";
   char *p[20];
   char *buf=buffer;

   while((p[in]=strtok(buf,","))!=NULL) {
             buf=p[in];                  /*buf=Fred male 25\0*/
             while((p[in]=strtok(buf," "))!=NULL) {
                       in++;
                       buf=NULL;
                    }
                 p[in++]="***"; //表现分割
                 buf=NULL;
   }

   printf("Here we have %d strings\n",in);
   for (int j=0; j<in; j++)
         printf(">%s<\n",p[j]);
   return 0;
}





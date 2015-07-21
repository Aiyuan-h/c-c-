#include <stdio.h>
#include <stdlib.h>

int main()
{
         char str[10];
         int n=0;
        // n=snprintf(str,sizeof(str),"%s","abcdsfasdfdsa");
        // sprintf(str,"abcdsfasdfdsa");
         strncpy(str,"asdfdsfsdfsdfsdfdsa",15);
         printf("str = %s\n",str);
//         printf("n=%d\n",n);
         perror("sdafsd");
         return 0;
 }

#include <stdio.h>
void binary_to_ascii(unsigned int value);
#define do_forever for(;;)

int main(void)
{
    do_forever;
    printf("%s\r\n",__FILE__);
    printf("%d\r\n",__LINE__);
    printf("%s\r\n",__DATE__);
    printf("%s\r\n",__TIME__);
    binary_to_ascii(30);
    return 0;
}

void binary_to_ascii(unsigned int value)
{
    unsigned int qutient;
    qutient =value/10;
    if(qutient!=0)
        binary_to_ascii(qutient);
    putchar(value%10+'0');
}

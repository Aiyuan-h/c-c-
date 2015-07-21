#include <stdio.h>

int main(void)
{
    char buf[512] = {0};
//    sscanf("123456 abcdedf", "%[^ ]", buf);
//    printf("%s\n", buf);


    sscanf("123456 abcdedfBCDEFxyz", "%[^A-Z]", buf);
    printf("%s\n", buf);
    return 0;
}


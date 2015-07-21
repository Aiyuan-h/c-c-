#include<iostream>
#include<ctime>
int main()
{
    int i;
    
    srand(time(0));
    
    /* 输出 10 个随机数. */
    for( i = 0;   i < 10;i++ )
        printf( "  %6d/n", rand() );
	std::cin.get();
	std::cin.get();
}


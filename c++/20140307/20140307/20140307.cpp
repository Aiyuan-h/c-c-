#include<iostream>
int main()
{
	char *s="******ab**0**",t[20]={0};
	void put(char *a,char *b);	
    put(s,t);
	std::cout<<t;
	std::cin.get();
	std::cin.get();
}
void put(char *a,char *b)
{
	int c=0;
	while(*a=='*')
	{
		a++;
	}

	while(*b='\0')
	{
		b++;
		a++;
		for(int i=0;i<10;i++)
			std::cout<<"fasdsdaf\n";
	}

	//while(c=0)
	//{
	//	for(int i=0;i<10;i++)
	//	std::cout<<"fasdsdaf\n";
	//	break;
	//}
}
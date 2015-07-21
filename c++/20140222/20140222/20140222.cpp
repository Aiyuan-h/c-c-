#include <iostream>
#include<cstring>
int main()
{
	using namespace std;
	char ch;
	int space =0;
	int total =0;
	cin.get (ch);
	
	while(ch!='.')
	{
		if(ch==' ')
		++space;
		++total;
		cin.get(ch);
	}
	cout<<space<<"space,"<<total;
//	cout<<""endl<<cout<<"\n";
	cin.get();

	cin.get();
	return 0;
}
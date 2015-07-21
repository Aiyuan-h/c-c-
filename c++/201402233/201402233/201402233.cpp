#include<iostream>
int main()
{
	using namespace std;
	char ch;
	cin>>ch;
//	cout<<ch<<"\n";
	if(!cin)
	{
		cin.clear();
		while(cin.get()!='\n')
		continue;
		cout<<"bad input";
	//	break;
	}
	cin.get();
	cin.get();
	return 0;
}

/*
int main()
{
	using namespace std;
	char ch;
	cin>>ch;
//	cout<<ch<<"\n";
	if(!cin)
	{
		cin.clear();
		while(cin.get()!='\n')
		continue;
		cout<<"bad input";
	//	break;
	}
	cin.get();
	cin.get();
	return 0;
}
*/
// char型输入数字时，输入流检测不报错，因为此时的数字不代表数字代表一个数字的字符
// int型输入字符时是会报错的。
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
// char����������ʱ����������ⲻ������Ϊ��ʱ�����ֲ��������ִ���һ�����ֵ��ַ�
// int�������ַ�ʱ�ǻᱨ��ġ�
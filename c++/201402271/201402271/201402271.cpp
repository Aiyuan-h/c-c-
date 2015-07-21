#include<iostream>
int main()
{
	using namespace std;
	short tell[10];
	short *p[20]=&tell;
	//cout<<p<<endl;
	cout<<tell<<endl;
	cout<<&tell+2<<endl;
	cout<<tell+1<<endl;
	
	cin.get();
	cin.get();
}
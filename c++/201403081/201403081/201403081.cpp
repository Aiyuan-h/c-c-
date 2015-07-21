#include<iostream>
#include<string>
int main()
{
	using namespace std;
	int* p = new int[71];
	cin>>*p;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<p<<endl;
	delete[] p; //OK!
	cin.get();
	cin.get();
}
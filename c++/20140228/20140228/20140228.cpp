#include<iostream>
int main()
{
	using namespace std;
	signed int address=0x00,div=0x00;
	div=0x80000000;
	address=0x0000000f-div;
	cout<<hex;
	cout<<div<<endl;
	cout<<address;
	cin.get();
	cin.get();
}
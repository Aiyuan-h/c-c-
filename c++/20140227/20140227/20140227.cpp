#include<iostream>
void abc(int (&a)[5]);
using namespace std;
int main()
{
	
	const int size=5;
	int arr[size]={0};

	abc(arr);
	cin.get();
	cin.get();
}

void abc(int (&a)[5])
{
	for(int i=0;i<5;i++)
	cout<<a[i];
}
// 数组名的引用

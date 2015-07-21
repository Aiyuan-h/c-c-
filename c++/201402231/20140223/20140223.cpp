#include<iostream>


using namespace std;
int main()
{	
	
	int sum_arr(int *arr,int n);
	int cookies[10]={0};
	cout<<sizeof cookies<<"\n";
	int sum=sum_arr(cookies,10);

	cin.get();
	cin.get();
	return 0;
}


int sum_arr(int *arr,int n)
{
	cout<<sizeof arr;
	return 0;
}
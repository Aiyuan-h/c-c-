#include <iostream>
#include <string>
#include<ctime>
#include<cctype>

using namespace std;
int fill_array(double ar[],int limit);
void show_array(const double ar[],int n);
char * buil(char c ,int n);

int main()
{
/*	double array[100];
	int values;
	values=fill_array(array,100);
	show_array(array,values);*/
char ch;
int times;
cin>>ch;
cin>>times;
char *ps=buil(ch,times);
cout << ps<<endl;
//delete [] ps;
//cout << ps<<endl;
	cin.get();
	cin.get();
 	return 0;
}

char * buil(char c ,int n)
{
	char * pstr=new char[n+1];
	pstr[n]='\0';
	while(n-->0)
		pstr[n]=c;
	cout<<(int*)pstr<<endl;
	delete [] pstr;
//	cout<<pstr;
	cout<<(int*)pstr<<endl;
	return pstr;
	//delete [] pstr;
}

/*
int fill_array(double * ar,int limit)
{
double temp;
int i;
	for(i=0;i<limit;i++)
	{
		cout<<"enter value "<<(i+1)<<":";
		cin>>temp;

		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"bad intput\n";
			break;
		}
		else if(temp<0)
			break;
		*(ar+i)=temp;
	}
	return i;
}

void show_array(const double ar[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<endl;
	}
//	ar[0]=0.3;
}*/
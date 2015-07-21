#include<iostream>
#include<fstream>
#include<cstdlib>
const int size=20;
int main()
{
	using namespace std;
	char filename[size];
	ifstream infile;
	cout<<"enter name of data file:";
	cin.getline(filename,size);
	infile.open(filename);
	if(!infile.is_open())
	{
		cout<<"could not open the file"<<filename<<endl;
		cout<<"program terminating.\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum=0.0;
	int count=0;

	infile>>value;
	while(infile.good())
	{
		++count;
		sum+=value;
		infile>>value;
	}
	if(infile.eof())
		cout<<"end of file reached.\n";
	else if (infile.fail())
		cout<<"input terminated by data mismatch.\n";
	else
		cout<<"input terminated for unknown reason";
	if (count ==0)
		cout<<"no data processed.\n";
	else
	{
		cout<<"items read: "<<count<<endl;
		cout<<"sum: "<<sum<<endl;
		cout<<"average:"<<sum/count<<endl;
	}
	infile.close();
	
	cin.get();
	cin.get();

	return 0;

}
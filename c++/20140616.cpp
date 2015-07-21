#include <iostream>
#include <string>


int main()
{
	using namespace std;

	string one("safdasdas");
	cout<<one<<endl;

	string two(20,'@');
	cout<<two<<endl;

	string three(one);
	cout<< three<<endl;

	one +="ops";
	cout<<one<<endl;

	two="sorry! that was";
	three[0]='p';
	string four;
	four=two+three;
	cout<<four<<endl;

	char alls[]="all's well that ends well";  
	string five (alls,20);
	cout<<five<<"!\n";

	string six(alls+6,alls+10);
	cout<<six<<",";

	string seven(&five[6],&five[10]);
	cout<<seven<<".....\n";
	
	string eight(four,7,16);
	cout<<eight<<"in motion!"<<endl;

	string name;
	cin>>name;
	cout<<name;
	getline(cin,name);
	cout<<name;

	cin.get();
	cin.get();
	return 0;
}
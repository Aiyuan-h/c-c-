#include<iostream>
#include<vector>
using namespace std;
vector<int>c;
vector<int>::iterator p;
int main()
{
    int a;
    int b;
    while(cin>>a>>b){
        c.push_back(a+b);
    }
    for(p=c.begin();p!=c.end();p++)
        cout<<*p<<endl<<endl;

    return 0;
}

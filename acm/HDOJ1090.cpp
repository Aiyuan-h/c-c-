#include<iostream>
#include<vector>
using namespace std;
vector<int>c;
vector<int>::iterator ptr;
int main()
{
        int a,b;
        int n;
        cin>>n;
        while(n-- && !cin.eof()){
                cin>>a>>b;
                c.push_back(a+b);
        }
        for(ptr=c.begin();ptr!=c.end();ptr++)
                cout<<*ptr<<endl;
        return 0;
}


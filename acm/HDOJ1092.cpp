#include<iostream>
#include<vector>
using namespace std;
vector<int>c,d;
vector<int>::iterator ptr,p;
int main()
{
    int a;
    while(cin>>a){        
        c.push_back(a);
    }
    int n;
    int sum=0;
    ptr=c.begin();
    n=*ptr;
    while(n!=0){
        for(;n>0;n--)
            sum+=*(++ptr);
        d.push_back(sum);
        sum=0;    
        n=*(++ptr);
    }
            
    for(p=d.begin();p!=d.end();p++)
        cout<<*p<<endl;

    return 0;
}

/*序列 1/2 2/3 3/5 5/8......求前n项的和*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    float s=0;
    int a=1,b=2;
    int temp;
    cout<<"please input a number:";
    cin>>num;
    for(int i=0;i<num;++i){
        s+=(float)a/b;
        temp=a;
        a=b;
        b=temp+b;
    }
    cout<<"s:"<<s<<endl;
    return 0;
}


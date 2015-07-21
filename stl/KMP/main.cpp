#include <iostream>
#include<string>
using namespace std;
void get_next(string T,int*next);
int main()
{
    string str="6ababaaaba";
    int N=str.size();
    int next[N];
    get_next(str,next);
    cout <<next[1]<<next[2]<<next[3]<<next[4]<<next[5]<< next[6];

    return 0;
}

void get_next(string T,int next[7])
{
    int i,j;
    i=1;
    j=0;
    next[1]=0;
    int n=T.size();
    while(i<n){
        cout<<T[i]<<T[j]<<endl;
        if(j==0||T[i]==T[j]){
            ++i;
            ++j;
            next[i]=j;
            cout<<"next["<<i<<"]"<<next[i]<<endl;
        }else{
            j=next[j];
        }
    }
}

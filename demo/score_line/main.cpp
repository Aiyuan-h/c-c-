#include <iostream>

using namespace std;

int main()
{
    int a[10],i=0,j=10,m;
    while(i!=10 && cin>>a[i]){
        a[i]=a[i]/10;
        i++;
    }
    while(j*10>0){
        m=0;
        for(i=0;i<10;i++){
            if(a[i]>=j){
                m++;
            }
        }
        if(m>=4){
            cout<<j*10<<endl;
            return 0;
        }
        j--;
    }
    return 0;
}


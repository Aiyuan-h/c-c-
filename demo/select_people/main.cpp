#include <iostream>

using namespace std;

int main()
{
    int a[5];
    int i=0;
    int j,t;
    int b[4];
    while(i!=5 && cin>>a[i]){
        i++;
    }
    for(i=0;i<5;i++){
        for(j=4;j>i;j--){
            if(a[j]<a[j-1]){
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
            }
        }
        for(i=0;i<4;i++){
            b[i]=a[i+1]-a[i];
        }
        for(i=0;i<4;i++){

        }
    }
    return 0;
}


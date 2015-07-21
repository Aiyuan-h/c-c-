#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[100],n=0,i,temp,min,max;
    char c='0';
    max=0;min=100;
    while(c!='\n'){
//        scanf("%d",&temp);
        cin>>temp;
        a[n]=temp;
        if(temp>max){
            max=temp;
        }
        if(temp<min){
            min=temp;
        }
        n++;
//        scanf("%c",&c);
//        cin>>c;  //这句不行，cin不读取\n，只有通过cin.get()来读取\n字符
        cin.get(c);
    }
    temp=0;
    for(i=0;i<n;i++){
        if(a[i]<max && a[i]>min)
            temp++;
    }
    cout<<temp;
    return 0;
}


#include <iostream>

using namespace std;
#define MAX 65535
//int main()
//{
//    int n,i,j=0,count,m=0;
//    cin>>n;
//    int a[MAX]={0};
//    while(j<=n){
//        count=0;
//        for(i=1;i<=n;i++){
//            if(j%i==0)
//                count++;
//        }
//        if(count%2!=0)
//            m++;
//        j++;
//    }
//    cout<<m<<endl;
//    return 0;
//}

int main()
{
    int i,j=1,n,m=0;
    int count=0;
    cin>>n;
    while (j<=n) {
        count=0;
        for(i=1;i<=n;i++){
            if(j%i==0){
                count++;
            }
        }
        if(count%2!=0){
            m++;
        }
        j++;
    }
    cout<<m<<endl;
    return 0;
}

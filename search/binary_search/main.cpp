#include <iostream>

using namespace std;
int binary_search(int *a,int n,int key);
int main()
{
    int a[]={0,1,16,24,35,47,59,62,73,88,99,110,120,23ij0,450,460};
    cout<<binary_search(a,sizeof(a)/sizeof(int),110);
    return 0;
}

int binary_search(int *a,int n,int key)
{
    int low=0;
    int high=n;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key<a[mid]){
            high=mid-1;//因为else return mid的存在这里需要减1
        }else if(key>a[mid]){
            low=mid+1;
        }else{
            return mid;
        }
    }
    return 0;
}


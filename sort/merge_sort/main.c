#include <stdio.h>
void merge_sort(int sr[],int tr1[],int head,int tail);
void merge(int sr[],int tr[],int head,int mid,int tail);
int main(void)
{
    int i,b[9];
    int a[10]={50,10,90,30,70,40,80,60,20};
    merge_sort(a,b,0,8);
    for(i=0;i<9;++i){
        printf("%d\n",b[i]);
    }
    return 0;
}

void merge_sort(int sr[],int tr1[],int head,int tail)
{
    int mid;
    int tr2[9];
    if(head==tail){
        tr1[head]=sr[head];
    }else {
        mid=(tail+head)/2;
        merge_sort(sr,tr2,head,mid);
        merge_sort(sr,tr2,mid+1,tail);
        merge(tr2,tr1,head,mid,tail);
    }
}
void merge(int sr[],int tr[],int head,int mid,int tail)
{
    int i,j,k;
    for(i=head,j=mid+1,k=head;i<=mid && j<=tail;k++){
        if(sr[i]<sr[j]){
            tr[k]=sr[i++];
        }else {
            tr[k]=sr[j++];
        }
    }
    //第一个子序列非空，将其中剩余的元素复制到temp中
    while(i<=mid){
        tr[k++]=sr[i++];
    }
    //第二个子序列非空，将其中剩余的元素复制到temp中
    while(j<=tail){
        tr[k++]=sr[j++];
    }
}

#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct list{
    int data;
    struct list *next;
}qlist;
void create_list_tail(qlist *L,int n);
void print_list(qlist *L);
int insert_elem(qlist *L,int i,int *e);
int delete_elem(qlist *L,int e);
int delete_linklist(qlist *L);
int main()
{
    int *e;
    *e=20;
    qlist *linklist= new qlist;
//    qlist *linklist;
    create_list_tail(linklist,10);
    print_list(linklist);
//    insert_elem(linklist,3,e);
//    print_list(linklist);
    delete_elem(linklist,8);
    print_list(linklist);
    delete_linklist(linklist);
    print_list(linklist);
    return 0;
}

//尾插法实现链表的建立
void create_list_tail(qlist *L,int n)
{
    qlist *r;
    srand(time(0));
    r=L;
    for(int i=0;i<n;i++){
        qlist *p=new qlist;
        p->data=i;
        p->next=NULL;
        r->next=p;
        r=p;
    }
    r->next=NULL;
//    delete p;
//    p=NULL;
}

int insert_elem(qlist *L,int i,int *e)
{
    qlist *p=new qlist;
    p->data=*e;
    qlist *q=L;
    while(i!=1){
        q=q->next;
        i--;
    }
    p->next=q->next;
    q->next=p;
//    delete p;   //p为什么不能释放？？
}

void print_list(qlist *L)
{
    qlist *q=L;
    while(q->next!=NULL){
        cout<<q->next->data<<endl;
        q=q->next;
    }
}

int delete_elem(qlist *L,int e)
{
    qlist *p=L,*q;
    while(p->data!=e){
        q=p;       //保留前一个节点地址
        p=p->next;
    }
    q->next=p->next;
    delete p;
}

int delete_linklist(qlist *L)
{
    qlist *p=L,*q;
    while(p){
        q=p->next;    //这里有点难度的，容易出错
        delete p;
        p=q;
    }
    p->next-NULL;
}

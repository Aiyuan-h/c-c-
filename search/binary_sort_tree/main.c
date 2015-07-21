#include <stdio.h>
typedef struct bitnode{
    int data;
    struct bitnode *lchild,*rchild;
}bitnode,*bitree;

#define FALSE 0
#define TRUE 1
int insert_bst(bitree *T,int key);
int search_bst(bitree T,int key,bitree f,bitree *p);
void in_order_traverse(bitree T);
int main(void)
{
    int i;
    int a[10]={62,88,58,47,35,73,51,99,37,93};
    bitree T=NULL;
    for(i=0;i<10;++i){
        insert_bst(&T,a[i]);
    }
    in_order_traverse(T);
    return 0;
}

int insert_bst(bitree *T,int key)
{
    bitree p,s;
    if(!search_bst(*T,key,NULL,&p)){
        s=(bitree)malloc(sizeof(bitnode));
        s->data=key;
        s->lchild=s->rchild=NULL;
        if(!p){
            *T=s;
        }else if(p->data>key){
            p->lchild=s;
        }else if(p->data<key){
            p->rchild=s;
        }
        return TRUE;
    }else{
        return FALSE;
    }
}

int search_bst(bitree T,int key,bitree f,bitree *p)
{
    if(!T){
        *p=f;
        return FALSE;
    }else if(key==T->data){
        *p=T;
        return TRUE;
    }else if(key<T->data){
        return search_bst(T->lchild,key,T,p);
    }else {
        return search_bst(T->rchild,key,T,p);
    }
}
void in_order_traverse(bitree T)
{
    if(!T)
        return;
    printf("%d ",T->data);
    in_order_traverse(T->lchild);
    in_order_traverse(T->rchild);
}

int delete_bst(bitree T,int key)
{
    if(search_bst()){

    }else{
        return 0;
    }
}

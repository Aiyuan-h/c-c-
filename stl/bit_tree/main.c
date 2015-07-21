#include <stdio.h>
#include <stdlib.h>
typedef struct bitnode{
    char data;
    struct bitnode *lchild,*rchild;
}bitnode,*bitree;
void create_bitree(bitree *T);
void pre_order_traverse(bitree T);
int main()
{
    bitree T;
    create_bitree(&T);
    pre_order_traverse(T);
    return 0;
}

void create_bitree(bitree *T)
{
    char ch;
    scanf("%c",&ch);

    if(ch=='#'){
        *T=NULL;
    }else if(ch=='\n'){
        return ;
    }else{
        *T=(bitree)malloc(sizeof(bitnode));
        if(!*T){
            exit(0);
        }else{
            (*T)->data=ch;
            create_bitree(&(*T)->lchild);
            create_bitree(&(*T)->rchild);
        }
    }
}

void pre_order_traverse(bitree T)
{
    if(T==NULL)
        return;
    printf("%c",T->data);
    pre_order_traverse(T->lchild);
    pre_order_traverse(T->rchild);
}

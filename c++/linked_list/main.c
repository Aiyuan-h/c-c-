#include <stdio.h>
#include<stdlib.h>

typedef struct NODE{
    struct NODE *link;
    int         value;
}Node;

#define TRUE 1
#define FALSE 0

int sll_insert(Node **rootp, int new_value);
Node *build_linked_list();
int main(void)
{
    int result;
    Node *root;
    root=build_linked_list();
    result=sll_insert(&root,1);
    printf("%d\r\n",root->value);
    printf("%d\r\n",root->link->value);
    printf("%d\r\n",root->link->link->value);
    printf("%d\r\n",root->link->link->link->value);
    printf("%d",result);
    return 0;
}

Node *build_linked_list()
{
    Node *rootPtr;
    Node *list1Node=(Node *)malloc(sizeof(Node));
    Node *list2Node=(Node *)malloc(sizeof(Node));
    Node *list3Node=(Node *)malloc(sizeof(Node));

    rootPtr=list1Node;
    list1Node->link=list2Node;
    list2Node->link=list3Node;
    list3Node->link=NULL;

    list1Node->value=5;
    list2Node->value=10;
    list3Node->value=15;

//    printf("%d\r\n",*rootPtr);
//    printf("%d\r\n",*list1Node->link);
//    printf("%d\r\n",*list2Node->link);
//    printf("%d\r\n",*list3Node->link); //null不能进行解除引用操作
    return rootPtr;
}

/*
** **rootp 采用指向指针的指针意为，可以访问root的指针的值，从而使其指向插入到首部的节点
*/
int sll_insert(Node **rootp, int new_value) 
{
    Node *current;
    Node *previous;
    Node *newNode;

    /*
    **得到指向第一个节点的指针
    */
    
    current=*rootp;
    previous=NULL;
    
    /*
    **寻找正确的插入位置，方法是按序访问链表，直到到达一个其值大于或等于新值得节点，
    */

    while(current!=NULL && current->value<new_value){
        previous=current;
        current=current->link;
    }
    
    /*
    **为新节点分配内存，并把新值存储到新节点中，如果内存分配失败，函数返回FALSE
    */
    
    newNode=(Node *)malloc(sizeof(Node));
    if(newNode ==NULL)
        return FALSE;
    newNode->value=new_value;
    \
    /*
    **把新节点插入到链表中，并返回TRUE
    */

    newNode->link=current;
    if(previous==NULL)
        *rootp=newNode;
    else
        previous->link=newNode;
    return TRUE;
}

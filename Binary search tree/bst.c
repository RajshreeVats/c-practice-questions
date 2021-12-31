#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void createNode()
{
    int key;
    struct Node *root;
    printf("Enter the data to add:- ");
    scanf("%d", &key);
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = key;
        root->lchild = NULL;
        root->rchild = NULL;
        printf("\n\nData Added successfully\n\n");
        return;
    }

    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = key;
    newNode->lchild = NULL;
    newNode->rchild = NULL;

    struct Node *temp = root;
    while (temp)
    {
        if (temp->data < key)
        {
            if (temp->rchild == NULL)
            {
                temp->rchild = newNode;
                printf("\n\nData Added successfully\n\n");
                return;
            }
            temp = temp->rchild;
        }
        else
        {
            if (temp->lchild == NULL)
            {
                temp->lchild = newNode;
                printf("\n\nData Added successfully\n\n");
                return;
            }
            temp = temp->lchild;
        }
    }
}

void Insert(int key)
{
    struct Node *t=root;
    struct Node *r=NULL,*p;
    if(root==NULL)
    {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
        }
        while(t!=NULL)
        {
            r=t;
            if(key<t->data)
            t=t->lchild;
            else if(key>t->data)
            t=t->rchild;
            else
            return;
        }
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        if(key<r->data) r->lchild=p;
        else r->rchild=p;
}

int Height(struct Node *p)
{
    int x,y;
    if(p==NULL)return 0;
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node *InPre(struct Node *p)
{
    while(p && p->rchild!=NULL)
    p=p->rchild;
    return p;
}

struct Node *InSucc(struct Node *p)
{
    while(p && p->lchild!=NULL)
    p=p->lchild;
    return p;
}

struct Node *Delete(struct Node *p,int key)
{
    struct Node *q;
    if(p==NULL)
    return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        root=NULL;
        free(p);
        return NULL;
    }
    if(key < p->data)
    p->lchild=Delete(p->lchild,key);
    else if(key > p->data)
    p->rchild=Delete(p->rchild,key);
    else
    {
        if(Height(p->lchild)>Height(p->rchild))
        {
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }
      else
        {
          q=InSucc(p->rchild);
          p->data=q->data;
          p->rchild=Delete(p->rchild,q->data);
        }
        
    }
return p;

}

struct Node *RInsert(struct Node *p,int key)
{
    struct Node *t=NULL;
    if(p==NULL)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
        
    }
    if(key < p->data)
    p->lchild=RInsert(p->lchild,key);
    else if(key > p->data)
    p->rchild=RInsert(p->rchild,key);
    return p;

}


void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}
void preorder(struct Node *p) {
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void postorder(struct Node *p) {
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
    }
}
void smallestElement (struct Node *p) {
    int min = 99999999;
    while(p!= NULL) {
        if(min>p->data) {
            min = p->data;
        }
        p = p->lchild;
    }
    printf("smallest element is :- %d", min);
    return;
}
void largestElement (struct Node *p) {
    int min = -99999999;
    while(p!= NULL) {
        if(min < p->data) {
            min = p->data;
        }
        p = p->rchild;
    }
    printf("largest element is :- %d", min);
    return;
}

struct Node * Search(int key)
{
    struct Node *t=root;
    while(t!=NULL)
    {
        if(key==t->data)
        return t;
        else if(key<t->data)
        t=t->lchild;
        else
        t=t->rchild;
    }
return NULL;
}


int main()
{
    struct Node *temp;
    root=RInsert(root,50);
    RInsert(root,10);
    RInsert(root,40);
    RInsert(root,20);
    RInsert(root,30);
    int choice;
    int key1;

    printf("Enter 0 to Quit\n");
    printf("Enter 1 for Insertion\n");
    printf("Enter 2 for Inorder Traversal\n");
    printf("Enter 3 for preorder Traversal\n");
    printf("Enter 4 for postorder Traversal\n");
    printf("Enter 5 for Searching an key\n");
    printf("Enter 6 for Finding Smallest Element\n");
    printf("Enter 7 for Finding Largest Element\n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        exit(0);
        break;
    case 1:
        createNode();
        break;
    case 2:
        Inorder(root);
        printf("\n\n");
        break;
    case 3:

        preorder(root);
        printf("\n\n");
        break;
    case 4:

        postorder(root);
        printf("\n\n");
        break;
    case 5:

        temp=Search(20);
        if(temp!=NULL)
        printf("element %d is found\n",temp->data);
        else
        printf("element is not found\n");
        printf("\n\n");
        break;
    case 6:

        smallestElement(root);
        printf("\n\n");
        break;
    case 7:

        largestElement(root);
        printf("\n\n");
        break;
    default:
    printf("\n\nWrong Choice :) \n");
        break;
    }

    return 0;
}
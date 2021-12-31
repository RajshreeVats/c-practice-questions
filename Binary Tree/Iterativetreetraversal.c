#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} *root = NULL;
struct queue
{
    int top;
    int last;
    int size;
    struct node **Q;
};

void create(struct queue *q, int s)
{
    q->last = q->top = -1;
    q->size = s;
    q->Q = (struct node **)malloc(sizeof(struct node *) * s);
}
void enqueue(struct queue *q, struct node *x)
{

    if (q->top == q->size - 1)
    {
        printf("FULL\n");
        return;
    }
    else
    {
        q->Q[q->last] = x;
        q->last++;
    }
}
struct node *dequeue(struct queue *q)
{
    struct node *t = NULL;
    if (q->top == q->last)
    {
        printf("Empty\n");
    }
    else
    {
        t = q->Q[q->top];
        q->top++;
    }
    return t;
}
int isEmpty(struct queue q)
{
    return q.top==q.last;
}
void tree()
{
    struct node *p,*t;
    int x;
    struct queue q;
    create(&q,100);
    printf("Eneter root value ");
    scanf("%d",&x);
    root=(struct node *)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(q))
    {
        p=dequeue(&q);
        printf("eneter left child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("eneter right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}
void dis(struct node *ptr)
{
    if (ptr)
    {
        printf("%d ", ptr->data);
        dis(ptr->lchild);
        dis(ptr->rchild);
    }
}

struct stack
{
    struct node **Q;
    int top;
    int size;
};
void crs(struct stack *q, int s)
{
    q->size = s;
    q->top = -1;
    q->Q = (struct node **)malloc(s * sizeof(struct node *));
}
void push(struct stack *q, struct node *x)
{
    if (q->top == q->size - 1)
    {
        printf("FULL");
    }
    else
    {
        q->top++;
        q->Q[q->top] = x;
    }
}
struct node *pop(struct stack *p)
{
    struct node *t = NULL;
    if (p->top == -1)
    {
        printf("Empty");
    }
    else
    {
        t = p->Q[p->top--];
    }
    return t;
}

void preorder(struct node *ptr)
{
    struct stack *q;
    
    while (ptr && q)
    {
        if (ptr)
        {
            printf("%d ", ptr->data);
            push(q, ptr);
            ptr = ptr->lchild;
        }
        else
        {

            ptr = pop(q);
            ptr = ptr->rchild;
        }
    }
}
int main()
{
    tree();
    struct stack st;
    crs(&st, 100);
    preorder(root);
    return 0;
}
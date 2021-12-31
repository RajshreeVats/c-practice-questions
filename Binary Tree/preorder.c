#include <stdio.h>
#include <stdlib.h>


struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};
struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}
void enqueue(struct Queue *q,struct Node *x)
{
    if((q->rear+1)%q->size==q->front)
    printf("Queue is Full");
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
        }
}
struct Node * dequeue(struct Queue *q)
{
    struct Node* x=NULL;
    if(q->front==q->rear)
    printf("Queue is Empty\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}
struct Node *root=NULL;

void Treecreate()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);
    printf("Eneter root value ");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node));
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
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        printf("eneter right child of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }

}

struct stack{
    int size; 
    int top;
    struct Node **s;

};
void createstack(struct stack *st, int size){
    st->size=size;
    st->top = -1;
    st->s = (struct Node **) malloc(st->size*sizeof(struct Node *));
}
void push (struct stack *st, struct Node *x) {
    if (st->top == st->size-1)
    printf("stack overflow");
    else {
        st->top++; 
        st->s[st->top] = x;
    }
}
struct Node *pop (struct stack *st){
    struct Node *x = NULL;
    if (st->top == -1) {
        printf("stack empty");
    }
    else {
         x = st->s[st->top];
         st->top--;
    }
    return x;
}





void Preorder(struct Node *p)
{
    struct stack stk;
    createstack(&stk,100);
    while(p || !(stk.top == -1))
    {
        if(p)
        {
            printf("%d ",p->data);
            push(&stk,p);
            p=p->lchild;
        }
        else
        {
            p=pop(&stk);
            p=p->rchild;
        }
    }
}

int main()
{
    Treecreate();
    Preorder(root);
    return 0;
}
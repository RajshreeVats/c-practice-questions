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
void tree(struct queue *t)
{
    struct node *x, *p;
    int d, lc, rc;
    root = (struct node *)malloc(sizeof(struct node));
    printf("Enter the root value:");
    scanf("%d", &d);
    root->lchild = root->rchild = NULL;
    enqueue(t, root);
    while (t->top != t->last)
    {
        p = dequeue(t);
        printf("Enter the value of left child:");
        scanf("%d", &lc);
        if (lc != -1)
        {
            x = (struct node *)malloc(sizeof(struct node));
            x->data = lc;
            x->rchild = x->lchild = NULL;
            p->lchild = x;
            enqueue(&t, x);
        }
        printf("Enter the value of right child:");
        scanf("%d", &rc);
        if (rc != -1)
        {
            x = (struct node *)malloc(sizeof(struct node));
            x->data = rc;
            x->rchild = x->lchild = NULL;
            p->rchild = x;
            enqueue(&t, x);
        }
    }
}

int main()
{
    struct queue ptr;
    create(&ptr, 10);
    tree(&ptr);
}
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void show(struct queue *q)
{

    if (isEmpty(q))
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = 0; i <= q->r; i++)
            printf("%d ", q->arr[i]);
        printf("\n");
    }
}

int main()
{
    struct queue q;
    int value;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    int choice;

    printf("Enter -1 to quit\n ");
    while (choice != -1)
    {
        printf(" enqueue\n ");
        printf("dequeue\n ");
        printf("Display\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value you want ot enqueue\n");
            scanf("%d", &value);
            enqueue(&q, value);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            show(&q);
            break;
        }
    }
}
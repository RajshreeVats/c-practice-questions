#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *last;
};
void enqueue(struct node *p, int d)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("Queue full\n");
        return;
    }
    else if (p == NULL)
    {
        t->data = d;
        p = t;
        p->last = t;
        p->next = NULL;
    }
    else
    {
        t->data = d;
        p->last->next = t;
        p->last = t;
        t->next = NULL;
    }
}
int dequeue(struct node *p)
{
    int d;
    if (p == NULL)
    {
        printf("Queue empty");
        return 0;
    }
    else
    {
        struct node *t;
        t = p;
        p = p->next;
        d = t->data;
        free(t);
    }
    return d;
}
int isEmpty(struct node *t)
{
    if (t == NULL)
        return 0;
}
void bfs(int arr[][5], int start, int n, struct node *t)
{
    int i = start;
    int visit[] = {0};
    printf("%d", i);
    visit[i] = 1;
    enqueue(t, i);
    while (isEmpty(t))
    {
        i = dequeue(t);
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] == 1 && visit[j] == 0)
            {
                printf("%d", j);
                visit[j] = 1;
                enqueue(t, j);
            }
        }
    }
}
int main()
{
    struct node *top = NULL;
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
    bfs(G, 4, 7, top);
    return 0;
}
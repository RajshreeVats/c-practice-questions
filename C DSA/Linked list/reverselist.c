#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
void create(struct node **head)
{
    int c, ch;
    struct node *temp, *rear;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf(" continue adding [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
void reverse(struct node **head)
{
    struct node *a, *b, *c;
 
    a = b = c = *head;
    a = a->next->next;
    b = b->next;
    c->next = NULL;
    b->next = c;
 
    while (a != NULL)
    {
        c = b;
        b = a;
        a = a->next;
        b->next = c;
    }
    *head = b;
}
 
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\t", p->num);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct node *p = NULL;
    int n;
 
    printf("Enter data to add into the list\n");
    create(&p);
    printf("Displaying the nodes in the list:\n");
    display(p);
    printf("Reversing the list...\n");
    reverse(&p);
    
 
    return 0;
}
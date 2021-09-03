#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
    struct node *prev;
};

void create(struct node *head)
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
        temp->prev = NULL;
        head = temp;
        temp->next = head;
        head -> prev = temp;
        printf(" continue adding [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
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

int main() {
 
  struct node *p = NULL;
    int n;
 
    printf("Enter data to add into the list\n");
    create(p);
    printf("Displaying the nodes in the CD list:\n");
    display(p);

  return 0; 
}

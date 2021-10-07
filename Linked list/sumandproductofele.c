#include<stdio.h>
#include<stdlib.h>
 

struct Node
{
    int data;
    struct Node* next;
};
 
void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
 

int getCount(struct Node* head)
{
    int count = 0;  
    struct Node* current = head;  
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int nodeSum(struct Node* head) {
    struct Node* ptr = head;
    int sum = 0;
    while (ptr != NULL) {
 
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}
int nodeProduct(struct Node* head) {
    struct Node* ptr = head;
    int product = 1;
    while (ptr != NULL) {
 
        product *= ptr->data;
        ptr = ptr->next;
    }
    return product;
}

int largestElement(struct Node* head)
{
    
    int max = 1;
    while (head != NULL) {
 
        
        if (max < head->data)
            max = head->data;
        head = head->next;
    }
    return max;
}
int smallestElement(struct Node* head)
{
    int min = 100;
    while (head != NULL) {

        if (min > head->data)
            min = head->data;
 
        head = head->next;
    }
    return min;
}

int main()
{
    struct Node* head = NULL;
    int sum = 0;
    push(&head, 7);
    push(&head, 3);
    push(&head, 6);
    push(&head, 2);
    push(&head, 4);

    puts("Created Linked List: \n");
    printList(head);
    printf("count of nodes is %d\n", getCount(head));
    printf("sum of nodes is %d\n", nodeSum(head));
    printf("product of nodes is %d\n", nodeProduct(head));
    printf("min of nodes is %d\n", smallestElement(head));
    printf("max of nodes is %d\n", largestElement(head));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data; 
    struct Node *next;

}*top = NULL;

void push (int x) {
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if (t == NULL) 
    printf("stack overflow");
    else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
void Display()
{
   struct Node *p;
    p=top;
    while(p!=NULL) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int pop () {
    int x= -1;
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if (top == NULL) 
    printf("stack underflow");
    else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
   return x; 

}
int peek (int x) {
    struct Node *t = top;
    for (int i =0; t!=NULL && i < x-1; i++) {
        t = t->next;
    }
    if (t!=NULL)
      return t->data;
    else 
      return -1;

}
int main () {
    push(10);
    push(20);
    push(30);
    push(20);
    push(30);
    Display();
    printf("%d ",pop());
    printf("%d ",peek(3));
  return 0;
}
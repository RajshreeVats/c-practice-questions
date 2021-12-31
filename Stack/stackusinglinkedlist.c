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
void isEmpty () {
    int x= -1;
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if (top == NULL) 
    printf("stack empty");
     else 
       printf("NO");
}
int main () {
    push(10);
    push(20);
    push(30);
    push(20);
    push(30);
    Display();
    int a;
    char choice;
    do
    {
        printf("\n Press 1 to push element to stack ");
        printf("\n Press 2 to pop element to stack ");
        printf("\n Press 3 to check if stack is empty ");
        printf("\n Press 4 to display  \n");
        scanf("%d",&a);
        switch(a)
        {
            case 1: push (70);
                    Display();
 	    	break;
             case 2: printf("%d ",pop());
                    Display();
	    	break;
               case 3: isEmpty ();
 		    break;
               case 4: Display() ; 
	    	break;
          default:printf("Wrong choice!");
        }
      printf("\n Do you want to continue? (Press y/n)");
      scanf(" %c",&choice);
    }
    while(choice=='y');
   
    /*printf("%d\n", peek(st, 2)); printf("%d ",peek(3)); */   
    
  return 0;
}
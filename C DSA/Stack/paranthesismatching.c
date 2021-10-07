#include <stdio.h>
#include <stdlib.h>

struct Node{
    char data; 
    struct Node *next;

}*top = NULL;

void push (char x) {
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

char pop () {
    char x= -1;
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
int isBalanced(char *exp) {
    int i;
    for (i=0; exp[i]!='\0'; i++) {
        if (exp[i]=='('){
            push(exp[i]);
        }
        else if(exp[i]==')') {
            if(top== NULL)
             return 0;
          pop();
        }
    }
    if(top== NULL)
         return 1;//true
    else
          return 0;//false
}

int main () {
    char *exp = "((a+b)*(b+c))";
    printf("%d" , isBalanced(exp));
    return 0;
}
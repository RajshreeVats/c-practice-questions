#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size; 
    int top;
    int *s;

};

void create (struct stack *st){
    printf("enter size ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int*) malloc(st->size*sizeof(int));
}
void display (struct stack st) {
    int i;
    for(i = st.top; i>=0; i--) {
        printf("%d \t", st.s[i]);
    }
    printf("\n");

}
void push (struct stack *st, int x) {
    if (st->top == st->size-1)
    printf("stack overflow");
    else {
        st->top++; 
        st->s[st->top] = x;
    }
}
int pop (struct stack *st){
    int x = -1;
    if (st->top == -1) {
        printf("stack empty");
    }
    else {
         x = st->s[st->top];
         st->top--;
    }
    return x;
}
int peek ( struct stack st, int index ) {
    int x = -1;
    if (st.top - index + 1 < 0) 
    printf("invalid index");
    else {
        x = st.s[st.top-index+1];
    }
    return x;    
}
void isEmpty (struct stack *st){
    int x = -1;
    if (st->top == -1) 
        printf("stack empty");
    else 
       printf("NO");
}

int main(){
    struct stack st;
    create (&st);
    push (&st, 10);
    push (&st, 30);
    push (&st, 40);
    push (&st, 20);
    display (st);
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
 case 1: push (&st, 70);
         display (st);
 		break;
 case 2: printf("%d\n", pop(&st));
         display (st);
		break;
 case 3: isEmpty (&st);
 		break;
 case 4: display (st) ; 
		break;
 default:printf("Wrong choice!");
 }
   printf("\n Do you want to continue? (Press y/n)");
   scanf(" %c",&choice);
}while(choice=='y');
   
    /*printf("%d\n", peek(st, 2)); */
   return 0;
}
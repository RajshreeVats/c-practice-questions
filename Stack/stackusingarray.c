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


int main(){
    struct stack st;
    create (&st);
    push (&st, 10);
    push (&st, 30);
    push (&st, 40);
    push (&st, 20);
    push (&st, 70);
    printf("%d\n", peek(st, 2));
    printf("%d\n", pop(&st));
    display (st);
   return 0;
}
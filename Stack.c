#include <stdio.h>

#define MAX_SIZE 10

struct Stack{
    int top; //index
    int stack[MAX_SIZE]; // stack array
};

void initialize(struct Stack *s){
    s->top=-1;
}

void push(struct Stack *s,int x){
    if(isFull(s)){
        printf("Stack Overflow\n");
        return;
    }
    else{
        /*s->top = s->top + 1;
        s->stack[s->top] = x; */ 
        s->stack[++(s->top)] = x;
    }
}
int pop(struct Stack *s){
    if(isEmpty(s)){
        printf("Stack Underflow\n");
        return -1;
    }
    else{
        return s->stack[s->top--];
        
    }
}
int isEmpty(struct Stack *s){
    return (s->top==-1);
}
int isFull(struct Stack *s){
    return (s->top == MAX_SIZE - 1);
}

int printStack(struct Stack  *s){
    for(int i=0;i<s->top+1;i++){
        printf("%d ",s->stack[i]);
    }
}

int main(){
    struct Stack s;
    initialize(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    printStack(&s);
}
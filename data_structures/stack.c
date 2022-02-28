#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10


struct stack{
    int data[MAX];
    int top;
};

void push(struct stack *st, int data){


    st->top++;
    st->data[st->top]=data;

    

}

void pop(struct stack *st){
    st->top--;
}

void peak(struct stack *st){
    printf("Top item is: %d", st->data[st->top]);
}

bool isEmpty(struct stack *st){
    if(st->top==-1){
        printf("Stack is Empty! \n");
        return true;
    }
        
    return false;
}

void createEmptyStack(struct stack *st) {
  st->top = -1;
}

void print_stack(struct stack *st){
    int i=0;
    if(isEmpty(st))
        return;
    while (st->top-i != -1){
        printf("data: %d \n",st->data[st->top-i]);
        i++;
    }
}

void main(){


    struct stack *st= (struct stack*)malloc(sizeof(struct stack));


    createEmptyStack(st);

    push(st,10);
    push(st,20);
    push(st,30);
    print_stack(st);
    pop(st);
    pop(st);
    pop(st);
    print_stack(st);
    peak(st);
    free(st);

}
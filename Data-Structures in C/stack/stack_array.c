#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"

Stack * initStack(int size) {
    Stack *newStack = (Stack *)malloc(sizeof(Stack));
    newStack->arr = (int *)malloc(sizeof(int) * size);
    newStack->capacity = size;
    newStack->top = -1;

    return newStack;
}

void push(Stack *stack, int value) {
    if(isFull(stack)){
        printf("Stack overflow!");
        return;
    }

    stack->arr[++stack->top] = value;
}

int pop(Stack *stack) {
    if(isEmpty(stack)) {
        printf("Stack underflow!");
        return -1;
    }
    
    return stack->arr[stack->top--];
}

int peek(Stack *stack) {
    if(stack->top != -1) {
        return stack->arr[stack->top];
    }
        
    return 0;
}

bool isFull(Stack *stack) {

    if(stack->top == stack->capacity-1){
        return true;
    }else {
        return false;
    }

}

bool isEmpty(Stack *stack) {
    if(stack->top == -1){
        return true;
    }else {
        return false;
    }
}

int size(Stack *stack) {
    return stack->top + 1;
}

void freeStack(Stack *stack) {
        free(stack->arr);
        free(stack);
}
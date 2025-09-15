#ifndef STACK_ARRYAY_H
#include <stdbool.h>

typedef struct {
    int *arr;
    int top;
    int capacity;
}Stack;

Stack * initStack(int size);
void push(Stack *stack, int value);
int pop(Stack *stack);
int peek(Stack *stack);
bool isFull(Stack *stack);
bool isEmpty(Stack *stack);
int size(Stack *stack) ;
void freeStack(Stack *stack);

#endif
#ifndef STACK_LINKEDLIST_H

#include <stdbool.h>

typedef struct StackNode {

    int data;
    struct StackNode *next;

}StackNode;

typedef struct {
    StackNode *top;
    
}NStack;

NStack *initStack();
void push(NStack *stack, int value);
int pop(NStack *stack);
int peek(NStack *stack);
bool isEmpty(NStack *stack);
int size(NStack *stack) ;
void freeStack(NStack *stack);

#endif
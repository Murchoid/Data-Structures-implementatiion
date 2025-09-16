#include "stack_ls.h"
#include <stdlib.h>
#include <stdbool.h>

NStack *initStack() {
    NStack *newStack = (NStack*)malloc(sizeof(NStack));
    newStack -> top = NULL;

    return newStack;
}

void push(NStack *stack, int value){
    StackNode *newData = (StackNode*)malloc(sizeof(StackNode));
    newData -> data = value;

    if( isEmpty(stack)) {
        stack -> top = newData;
        newData -> next = NULL;
        return;
    }

    newData -> next = stack -> top;
    stack -> top = newData;
    
}

int pop(NStack *stack) {
    if( isEmpty(stack)) {
        return -1;
    }

    
    int data = stack -> top -> data;

    StackNode *temp = stack -> top;
    stack -> top = temp -> next;

    free(temp);

    return data;
    
}

int peek(NStack *stack) {

    if( isEmpty(stack)) {
        return -1;
    }

    int data = stack -> top -> data;

    return data;

}


bool isEmpty(NStack *stack) {
    return stack -> top == NULL;
}

int size(NStack *stack) {
     if( isEmpty(stack)) {
        return 0;
    }
    StackNode *temp = stack -> top;

    int results = 0;
    while(temp != NULL) {
        results++;
        temp = temp  -> next;
    }

    return results;
}

void freeStack(NStack *stack) {
    StackNode *temp;


    while(stack -> top != NULL){

        temp= stack -> top;
        stack -> top = stack-> top -> next;
        free(temp);
        
        
    }

    free(stack);
}
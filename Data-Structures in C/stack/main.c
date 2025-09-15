#include <stdio.h>
#include "stack_array.h"

int main() {
    printf("Inititalizing stack...\n");
    Stack *stack = initStack(5);

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    printf("top of array now: %d\n", peek(stack));
    pop(stack);
    printf("top of array now: %d\n", peek(stack));
    freeStack(stack);
    
    return 0;
}
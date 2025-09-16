#include <stdio.h>
#include "stack_ls.h"

int main() {
    printf("=== Testing Stack Implementation ===\n");

    // Initialize stack
    NStack *stack = initStack();
    printf("Stack initialized. Is empty? %s\n", isEmpty(stack) ? "Yes" : "No");

    // Push values
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("Pushed 10, 20, 30 onto stack.\n");

    // Peek top
    printf("Peek top: %d\n", peek(stack));

    // Size
    printf("Current size: %d\n", size(stack));

    // Pop values
    printf("Pop: %d\n", pop(stack));
    printf("Pop: %d\n", pop(stack));

    // Peek after popping
    printf("Peek top now: %d\n", peek(stack));

    // Size again
    printf("Current size: %d\n", size(stack));

    // Pop last element
    printf("Pop: %d\n", pop(stack));

    // Try popping from empty stack
    printf("Pop from empty stack: %d\n", pop(stack));

    // Final check
    printf("Is empty? %s\n", isEmpty(stack) ? "Yes" : "No");
    printf("Final size: %d\n", size(stack));

    // Free the stack
    freeStack(stack);
    printf("Stack memory freed.\n");

    return 0;
}

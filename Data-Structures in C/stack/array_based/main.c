#include <stdio.h>
#include "stack_array.h"

int main() {
    printf("=== Testing Array-Based Stack Implementation ===\n");

    // Initialize stack with capacity 5
    printf("Initializing stack...\n");
    Stack *stack = initStack(5);

    // Push values
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    printf("Pushed 1, 2, 3, 4 onto stack.\n");

    // Peek top
    printf("Peek top: %d\n", peek(stack));

    // Pop one
    printf("Pop: %d\n", pop(stack));
    printf("Peek after pop: %d\n", peek(stack));

    // Push until full
    push(stack, 5);
    push(stack, 6);
    printf("Pushed 5, 6 (stack should now be full).\n");

    // Size check
    printf("Current size: %d\n", size(stack));

    // Pop everything
    while (!isEmpty(stack)) {
        printf("Pop: %d\n", pop(stack));
    }

    // Final check
    printf("Stack empty? %s\n", isEmpty(stack) ? "Yes" : "No");

    // Free memory
    freeStack(stack);
    printf("Stack memory freed.\n");

    return 0;
}

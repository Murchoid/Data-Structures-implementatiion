// main.c
#include "queue_array.h"
#include <stdio.h>

int main() {
    Queue* q = init(5);

    if (isEmpty(q)) {
        printf("Queue is empty.\n");
    }

    printf("Enqueuing: 10, 20, 30\n");
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("Front: %d\n", getFront(q));
    printf("Rear: %d\n", getRear(q));

    printf("Dequeuing two elements: %d, %d\n", dequeue(q), dequeue(q));
    printf("Front after dequeue: %d\n", getFront(q));

    printf("Enqueuing: 40, 50, 60\n");
    enqueue(q, 40);
    enqueue(q, 50);
    enqueue(q, 60); // This should fill the queue

    printf("Queue full: %s\n", isFull(q) ? "yes" : "no");

    while (!isEmpty(q)) {
        printf("Dequeued: %d\n", dequeue(q));
    }

    printf("Queue empty: %s\n", isEmpty(q) ? "yes" : "no");

    freeQueue(q);
    return 0;
}   
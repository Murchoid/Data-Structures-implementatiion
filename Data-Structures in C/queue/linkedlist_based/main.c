#include <stdio.h>
#include "queue_ls.h"

int main() {
    printf("Initializing queue...\n");
    Queue *queue = init();

    printf("Enqueueing values...\n");
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    printf("Front: %d\n", getFront(queue)); // should be 10
    printf("Rear: %d\n", getRear(queue));   // should be 30
    printf("Size: %d\n", queue->count);

    printf("Dequeuing values...\n");
    printf("Dequeued: %d\n", dequeue(queue)); // should remove 10
    printf("Dequeued: %d\n", dequeue(queue)); // should remove 20

    printf("Front after dequeues: %d\n", getFront(queue)); // should be 30
    printf("Rear after dequeues: %d\n", getRear(queue));   // should be 30
    printf("Size: %d\n", queue->count);

    printf("Dequeued last: %d\n", dequeue(queue)); // should remove 30
    printf("Is queue empty? %s\n", isEmpty(queue) ? "Yes" : "No");

    freeQueue(queue);
    return 0;
}

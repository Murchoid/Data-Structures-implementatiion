//FIFO
#include "queue_array.h"
#include <stdlib.h>
#include <stdio.h>

Queue* init(int size) {
    Queue *newQueue = (Queue*)malloc(sizeof(Queue));
    newQueue -> size = size;
    newQueue -> arr = (int *)malloc(sizeof(int) * size);
    newQueue -> count = 0;

    return newQueue;
}

void enqueue(Queue *queue, int data) {
    if(isEmpty(queue)) {
        queue -> arr[0] = data;
        queue -> front = data;
        queue -> count++;
        return;
    } 
    if(isFull(queue)) {
        printf("\nQueue is full!\n");
    }

    int i = 0;

    while(queue -> arr[i]){
        i++;
    }
    queue -> arr[i] = data;
    queue -> count++;
    queue -> rear = data;
}

int dequeue(Queue *queue) {
     if(isEmpty(queue)) {
        return -1;
    }

    int result = queue -> arr[0];
    
    int i = 0;
    while(queue -> arr[i]) {
        queue -> arr[i] = queue -> arr[i + 1];
        i++;
    }

    queue -> front = queue -> arr[0];
    queue -> count--;
    return result;

}

bool isFull(Queue *queue) {
    return queue -> count == queue -> size;
}

bool isEmpty(Queue *queue) {
    return queue -> count == 0;;
}

int getFront(Queue *queue) {
    if(isEmpty(queue)) {
        return -1;
    }
    return  queue -> front;

}

int getRear(Queue *queue) {

    return queue -> rear;
}

void freeQueue(Queue *queue) {
    free(queue -> arr);
    free(queue);
}
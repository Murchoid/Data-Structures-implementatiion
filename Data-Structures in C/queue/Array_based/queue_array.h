#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

#include <stdbool.h>

typedef struct {
    int *arr;
    int front;
    int rear;
    int size;
    int count;
} Queue;

Queue* init(int size);
void enqueue(Queue *queue, int data);
int dequeue(Queue *queue);
bool isEmpty(Queue *queue);
bool isFull(Queue *queue);
int getFront(Queue *queue);
int getRear(Queue *queue);
void freeQueue(Queue *queue); 

#endif
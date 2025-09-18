#ifndef QUEUE_LS_H
#define QUEUE_LS_H

#include <stdbool.h>

typedef struct queue_ls {
    int data;
    struct queue_ls *next;
}queue_ls;

typedef struct Queue {
    struct queue_ls *front;
    struct queue_ls *rear;
    int count;

}Queue;

Queue* init();
void enqueue(Queue *queue, int data);
int dequeue(Queue *queue);
bool isEmpty(Queue *queue);
int getFront(Queue *queue);
int getRear(Queue *queue);
void freeQueue(Queue *queue); 

#endif
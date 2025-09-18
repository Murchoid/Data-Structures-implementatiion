#include <stdbool.h>
#include <stdlib.h>
#include "queue_ls.h"

Queue* init() {
    Queue *newQueue = (Queue*)malloc(sizeof(Queue));
    newQueue ->count = 0;
    newQueue ->front = NULL;
    newQueue ->rear = NULL;

    return newQueue;

}

void enqueue(Queue *queue, int data) {
    queue_ls *newQeueu = (queue_ls*)malloc(sizeof(queue_ls));
    newQeueu ->data = data;
    newQeueu ->next = NULL;

    if(queue ->count == 0) {
        queue ->front = newQeueu;
        queue -> rear = newQeueu;
    }else {
        queue ->rear ->next = newQeueu;
        queue ->rear = newQeueu;
    }
    queue ->count++;

}

int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        return -1; 
    }
    queue_ls *temp = queue->front;
    int result = temp->data;
    queue->front = temp->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    queue->count--;
    free(temp);
    return result;
}


bool isEmpty(Queue *queue) {
    return queue -> count == 0;
}


int getFront(Queue *queue) {
    int results = queue ->front ->data;

    return results;
}

int getRear(Queue *queue) {
    if (isEmpty(queue)) return -1;
    return queue->rear->data;
}

void freeQueue(Queue *queue) {
    queue_ls *temp = queue -> front;

    while(temp != NULL) {
        queue_ls *temp2 = temp;
        temp = temp ->next;
        free(temp2);
    }

    free(queue);
}
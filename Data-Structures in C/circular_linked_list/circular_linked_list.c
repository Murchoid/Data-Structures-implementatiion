#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circular_linked_list.h"

void insertInNode(int data, Node** head){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;

    if(*head == NULL){
        *head = temp;
        temp->next = *head;
        return;
    }

    Node* temp2 = *head;
    while(temp2->next != *head){
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->next = *head;
}

void readDataInNode(Node* head){
    Node* temp = head;

    while(temp->next != head){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    temp = temp->next;
    printf("The next node should be the head: %d\n", temp->data);
}

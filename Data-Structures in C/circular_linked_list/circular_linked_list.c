#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct  Node
{
    int data;
    struct Node* next;
}Node;

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
    printf("The next node should be the head: %d", temp->data);
}

int main(){
    Node* head = NULL;

    insertInNode(1, &head);
    insertInNode(2, &head);
    insertInNode(3, &head);
    insertInNode(4, &head);
    insertInNode(5, &head);

    readDataInNode(head);
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
} Node;

void insertNodeAtEnd(int data, Node** head){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (*head == NULL) {
        *head = temp;
        return;
    }

    Node* temp2 = *head;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }

    temp2->next = temp;
    temp->prev = temp2;
}

void insertAtPos(int data, int pos, Node** head){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if (*head == NULL || pos == 1) {
        temp->next = *head;
        if (*head != NULL)
            (*head)->prev = temp;
        *head = temp;
        return;
    }

    Node* temp2 = *head;
    for (int i = 0; i < pos - 2 && temp2->next != NULL; i++) {
        temp2 = temp2->next;
    }

    Node* temp3 = temp2->next;
    temp->next = temp3;
    temp2->next = temp;
    temp->prev = temp2;
    if (temp3 != NULL) {
        temp3->prev = temp;
    }
}

void readValueInNode(Node* head){
    Node* temp = head;
    printf("Data in Node: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeNodeList(Node* head){
    Node* temp;

    while(head!=NULL){
        temp = head;
        head = head->next;
        temp->prev = NULL;
        temp->next = NULL;
        free(temp);
    }
}

int main(){
    Node* head = NULL;

    insertNodeAtEnd(1, &head);
    insertNodeAtEnd(2, &head);
    insertNodeAtEnd(3, &head);
    insertNodeAtEnd(5, &head);
    insertNodeAtEnd(6, &head);
    
    readValueInNode(head);

    insertAtPos(4, 4, &head);

    readValueInNode(head);
    freeNodeList(head);

}

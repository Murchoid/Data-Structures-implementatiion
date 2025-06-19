#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node* next;
}Node;


void insertIntoNode(int data, Node** head){

    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        return;
    }


    Node* temp2 = *head;
    
    while(temp2->next != NULL){
        temp2=temp2->next;
    }

    temp2->next = temp;


}


void insertAtPos(int data, int pos, Node** head){

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;

    Node* temp = *head;

    for(int i=0; i<pos-2; i++){
        temp = temp->next;
    }
    newNode -> next = temp->next;
    temp->next = newNode;
    
}


void reverseList(Node **head){
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;


    while(current != NULL){

        next = current->next;
        current->next = prev;
        prev = current;
        current = next; 
    }

    *head = prev;


}

void readValuesInNode(Node* head){

    Node* temp = head;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }

}


void freeList(Node* head){

    Node* temp;

    while(head!=NULL){

        temp = head;
        head = head->next;

        free(temp);
    }

}

int main(){

    Node *head = (Node*)malloc(sizeof(Node));

    head = NULL;

    insertIntoNode(1, &head);
    insertIntoNode(2, &head);
    insertIntoNode(3, &head);
    insertAtPos(6, 3, &head);
    insertIntoNode(4, &head);
    insertIntoNode(5, &head);

    readValuesInNode(head);

    reverseList(&head);
    
    printf("\n\n");

    readValuesInNode(head);
    freeList(head);
}

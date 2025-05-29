#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node* next;
}thisNode;


void insertIntoNode(int data, thisNode** head){

    thisNode* temp = (thisNode*)malloc(sizeof(thisNode));
    temp->data = data;
    temp->next = NULL;

    if(*head == NULL){
        *head = temp;
        return;
    }


    thisNode* temp2 = *head;
    
    while(temp2->next != NULL){
        temp2=temp2->next;
    }

    temp2->next = temp;


}

void readValuesInNode(thisNode* head){

    thisNode* temp = head;

    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }

}


void freeList(thisNode* head){

    thisNode* temp;

    while(head!=NULL){

        temp = head;
        head = head->next;

        free(temp);
    }

}

int main(){

    thisNode *head = (thisNode*)malloc(sizeof(thisNode));

    head = NULL;

    insertIntoNode(1, &head);
    insertIntoNode(2, &head);
    insertIntoNode(3, &head);
    insertIntoNode(4, &head);
    insertIntoNode(5, &head);

    readValuesInNode(head);
    freeList(head);


}
#ifndef CIRCULARLINKEDLIST_H


typedef struct  Node
{
    int data;
    struct Node* next;
}Node;

void insertInNode(int data, Node** head);
void readDataInNode(Node* head);

#endif
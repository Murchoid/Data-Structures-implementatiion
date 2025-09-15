#include "circular_linked_list.h"
#include <stdio.h>

int main(){
    Node* head = NULL;

    insertInNode(1, &head);
    insertInNode(2, &head);
    insertInNode(3, &head);
    insertInNode(4, &head);
    insertInNode(5, &head);

    readDataInNode(head);
}
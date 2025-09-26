#include "hash.h"
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

ContactStruct *contactBook[SIZE];

size_t hash(char *name) {
    size_t index = 0; 
    for (size_t i = 0; i < strlen(name); i++) {
        index += name[i];
    }
    //todo handle collisions
    return index % SIZE;
}

size_t Insert(char *name, long phoneNum) {
    size_t index = hash(name);

    ContactStruct* newContact = malloc(sizeof(ContactStruct));
    if (newContact == NULL) {
        return -1;
    }

    newContact->name = strdup(name); 
    newContact->phoneNum = phoneNum;

    contactBook[index] = newContact;
    return index;
}

ContactStruct* Search(char *name) {
    size_t index = hash(name);
    return contactBook[index]; 
}

bool Delete(char *name) {
    size_t index = hash(name);
    if (contactBook[index] != NULL) {
        free(contactBook[index]->name); 
        free(contactBook[index]);
        contactBook[index] = NULL;
        return true;
    }
    return false;
}

void printContactBook() {
    for (size_t i = 0; i < SIZE; i++) {
        if (contactBook[i] != NULL) { 
            printf("Name: %s Phone: %ld\n", contactBook[i]->name, contactBook[i]->phoneNum);
        }
    }
}

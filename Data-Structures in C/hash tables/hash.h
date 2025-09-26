#ifndef HASH_H

#define HASH_H
#define SIZE 10

#include <stdbool.h>
#include <stddef.h>

typedef struct {
    char *name;
    long phoneNum;
}ContactStruct;

size_t Insert(char *name, long phoneNum);
ContactStruct* Search(char *name);
bool Delete(char *name);
size_t hash(char *name);
void printContactBook();

#endif
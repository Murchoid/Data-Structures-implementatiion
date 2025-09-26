#include "hash.h"
#include <stdio.h>
#include <stdbool.h>

int main() {

    printContactBook();
    Insert("Michael", 254799431541);
    Insert("Antony", 123456789);
    printContactBook();
    ContactStruct* foundContant = Search("Michael");
    printf("\nName: %s Phone: %ld\n", foundContant->name, foundContant->phoneNum);
    bool del = Delete("Antony");
    printContactBook();

    return 0;
}
#include "array.c"
#include <stdbool.h>

int main(){

    array intArray;

    initArray(&intArray, INT_TYPE, 10);
    int a = 5, b = 1, c = 10, d = 13;
    insert(&intArray, &a);
    insert(&intArray, &b);
    insert(&intArray, &c);
    insert(&intArray, &d);
    
    traverse(&intArray);
    bool isInArray = search(&intArray, &a);

    if(isInArray)
        printf("\n%d is in the array!", a);
    else
        printf("\n%d is not in array", a);
    
    del(&intArray, &b);
    traverse(&intArray);
    return 0;
}
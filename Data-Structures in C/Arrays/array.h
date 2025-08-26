#ifndef ARRAY_H  

#include <stddef.h>
#include <stdbool.h>

typedef enum {
    INT_TYPE,
    CHAR_TYPE,
    FLOAT_TYPE,
} array_type;

typedef struct arrayType {
    array_type type;
    size_t size;
    size_t capacity;
    size_t elemSize;
    void *data;
} array;

void initArray(array *arr, array_type type, size_t capacity);
void push(array *arr, void* elem);
bool search(array *arr, void *data);
void del(array *arr, void *data);
void traverse(array *arr);

#endif  
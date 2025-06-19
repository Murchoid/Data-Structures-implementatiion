#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef enum{
    INT_TYPE,
    CHAR_TYPE,
    FLOAT_TYPE,
}array_type;

typedef struct arrayType{
    array_type type;
    size_t size;
    size_t capacity;
    size_t elemSize;
    void *data;
}array;


void initArray(array *arr, array_type type, size_t capacity){
    arr->size = 0;
    arr->capacity = capacity;
    arr->type = type;
    switch(type){
        case INT_TYPE:
            arr->elemSize = sizeof(int);
            break;
        case CHAR_TYPE:
            arr->elemSize = sizeof(char);
            break;
        case FLOAT_TYPE:
            arr->elemSize = sizeof(float);
            break;
    }

    arr->data = malloc(arr->elemSize * capacity);
    if(!arr->data){
        perror("Memory allocatoin failed!");
        exit(EXIT_FAILURE);
    }
}


void insert(array *arr, void* elem){

    if(arr->size >= arr->capacity){
        printf("Array is full cant insert!");
        return;
    }

    void *target = (char *)arr->data + (arr->size * arr->elemSize);
    memcpy(target, elem, arr->elemSize);
    arr->size++;
    
}

bool search(array *arr, void *data){

    for(int i = 0; i < arr->size; i++){
        
        void *target = (char *)arr->data + (i * arr->elemSize);
        switch(arr->type){
            case INT_TYPE:
                if(*(int *)target == *(int *)data){
                    printf("target: %d data: %d", *(int *)target, *(int *)data);
                    return true;
                }
            break;
            case CHAR_TYPE:
                if(*(char *)target == *(char *)data){
                    return true;
                }
            break;
            case FLOAT_TYPE:
                if(*(float *)target == *(float *)data){
                    return true;
                }
            break;
        }
    }
    return false;
}

void del(array *arr, void *data){
    int newSize = 0;

    for(int i = 0; i < arr->size; i++){
        
        bool isValue = true;

        void *target = (char *)arr->data + (i * arr->elemSize);
        switch(arr->type){
            case INT_TYPE:
                isValue = (*(int *)target != *(int *)data);
            break;
            case CHAR_TYPE:
                isValue = (*(char *)target != *(char *)data);
            break;
            case FLOAT_TYPE:
                isValue = fabs(*(float *)target - *(float *)data) > 0.0001f;
            break;
        }

        if(isValue){
            if(newSize != i){
                void *dest = (char *)arr->data + (newSize * arr->elemSize);
                memcpy(dest,target,arr->elemSize);
            }
            newSize++;
        }
    }

    arr->size = newSize;
}

void traverse(array *arr){

    printf("\nArray contents: ");
    for(int i = 0; i < arr->size; i++){
        void * elem = (char *) arr->data + (i * arr->elemSize);

        switch (arr->type)
        {
        case INT_TYPE:
            printf("%d ", *(int *)elem);
            break;
        case CHAR_TYPE:
            printf("%c ", *(char *)elem);
            break;
        case FLOAT_TYPE:
            printf("%f ", *(float *)elem);
            break;
        
        default:
            break;
        }
    }
}

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
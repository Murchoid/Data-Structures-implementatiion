#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



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

    void *target = (char *)arr->data + (arr->size * arr->capacity);
    memcpy(target, elem, arr->elemSize);
    arr->size++;
    
}

bool search(array *arr, void *data){

    for(int i = 0; i < arr->size; i++){
        
        void *target = (char *)arr->data + (arr->size * arr->capacity);
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

void del(int array[], int data, int* size){
    for(int i = 0; i < *size; i++){
        if(array[i] == data){
            for(int j = i; j < *size-1;j++){
                array[j] = array[j+1];
            }
            (*size)--;
            return;
        }
    }
}

void traverse(array *arr){

    printf("\nArray contents: ");
    for(int i = 0; i < arr->size; i++){
        void * elem = (char *) arr->data + (i * arr->capacity);

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
        printf("%d is in the array!", a);
    else
        printf("%d is not in array", a);
    
    return 0;
}
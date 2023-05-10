//
//  array.c
//  interview_array
//
//  Created by Mark on 5/7/23.
//

#include "array.h"

const int MIN_CAPACITY = 16;

MArray* marray_new(int capacity) {
    if(capacity < MIN_CAPACITY) {
        capacity = MIN_CAPACITY;
    }
    MArray* marray = malloc(sizeof(MArray));
    marray->size = 0;
    marray->capacity = capacity;
    marray->data = (int*)malloc(capacity*sizeof(int));
    return marray;
}

void marray_destroy(MArray* p_array) {
    free(p_array->data);
    free(p_array);
}

int marray_size(MArray* p_array) {
    return p_array->size;
}

void marray_push(MArray* p_array, int element) {
    if(p_array->size+1 > p_array->capacity) {
        marray_size_up(p_array);
    }
    *(p_array->data + p_array->size) = element;
    ++(p_array->size);
}

int marray_pop(MArray* p_array) {
    if(marray_is_empty(p_array)) {
        exit(-1);
    }
    --(p_array->size);
    return *(p_array->data + p_array->size);
}

int marray_at(MArray* p_array, int index) {
    return *(p_array->data + index - 1);
}

void marray_put(MArray* p_array, int index, int element) {
    if(p_array->size < index) {
        exit(-1);
    }
    *(p_array->data + 1) = element;
}

bool marray_is_empty(MArray* p_array) {
    return p_array->size == 0;
}

void marray_size_up(MArray* p_array) {
    int new_capacity = p_array->capacity * 2;
    int* new_data = (int*)realloc(p_array->data, new_capacity*sizeof(int));
    p_array->data = new_data;
    p_array->capacity = new_capacity;
}

void marray_print(MArray* p_array) {
    int size = p_array->size;
    printf("Array size is %d\n", size);
    for(int i = 0; i < size; ++i) {
        printf("%d, ", *(p_array->data + i));
    }
    printf("\n");
}


//
//  array.h
//  interview_array
//
//  Created by Mark on 5/7/23.
//

#ifndef array_h
#define array_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct MarkImplementationArary {
    int size;
    int capacity;
    int *data;
} MArray;

//array function

//create a new MArray with initial capacity
MArray* marray_new(int capacity);
void marray_destroy(MArray* p_array);
int marray_size(MArray* p_array);
void marray_push(MArray* p_array, int element);
int marray_pop(MArray* p_array);
int marray_at(MArray* p_array, int index);
void marray_put(MArray* p_array, int index, int element);
bool marray_is_empty(MArray* p_array);

void marray_size_up(MArray* p_array);
void marray_print(MArray* p_array);

#endif /* array_h */

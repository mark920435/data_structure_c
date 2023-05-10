//
//  main.c
//  run_array
//
//  Created by Mark on 5/7/23.
//

#include <stdio.h>
#include "array.h"

int main(int argc, const char * argv[]) {
    int capacity = 0;
    printf("Enter how many numbers you want to store? ");
    scanf("%d", &capacity);
    
    //initialize
    MArray* ptr_marray = marray_new(capacity);
    for(int i = 0; i < capacity; ++i) {
        marray_push(ptr_marray, i);
    }
    marray_print(ptr_marray);
    
    //push one more element
    printf("current capacity = %d\ncurrent size = %d\n", ptr_marray->capacity, ptr_marray->size);
    printf("push 0\n");
    marray_push(ptr_marray, 0);
    printf("current capacity = %d\ncurrent size = %d\n", ptr_marray->capacity, ptr_marray->size);
    marray_print(ptr_marray);
    
    //pop one element
    printf("current capacity = %d\ncurrent size = %d\n", ptr_marray->capacity, ptr_marray->size);
    printf("pop\n");
    marray_pop(ptr_marray);
    printf("current capacity = %d\ncurrent size = %d\n", ptr_marray->capacity, ptr_marray->size);
    marray_print(ptr_marray);
    
    //random access
    printf("modify data in 2 to 10\n");
    marray_put(ptr_marray, 2, 10);
    marray_print(ptr_marray);
    
    marray_destroy(ptr_marray);
    
}

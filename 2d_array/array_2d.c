//
//  array_2d.c
//  2d_array
//
//  Created by Mark on 5/9/23.
//

#include <stdlib.h>
#include "array_2d.h"


void array_2d_init(int** array_2d, int rows, int cols){
    //malloc
    array_2d = malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; ++i) {
        *(array_2d + i) = malloc(cols * sizeof(int));
    }
    
    //initialize
    for(int n = 0; n < rows; ++n) {
        for(int m = 0; m < cols; ++m) {
            *(*(array_2d + n) + m) = n * m;
        }
    }
    
    for(int n = 0; n < rows; ++n) {
        for(int m = 0; m < cols; ++m) {
            printf("%d ", *(*(array_2d + n) + m));
        }
        printf("\n");
    }
}

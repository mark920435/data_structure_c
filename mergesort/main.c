//
//  main.c
//  mergesort
//
//  Created by Mark on 5/9/23.
//

#include <stdio.h>
#include "mergesort.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[] = {5,27,43,78,3,88,1,2,4,98,42};


    merge_sort(array, 0, 10);

    for(int i = 0; i < 11; i++) {
        printf("%d ", *(array + i));
    }
    
    
    return 0;
}

//
//  quicksort.c
//  quicksort
//
//  Created by Mark on 5/8/23.
//

#include "quicksort.h"

void quicksort(int* array, int left, int right) {
    if(left == right) return;
    int pivot = *(array + left);
    printf("left: %d, right: %d, pivot: %d\n", left, right, pivot);
    int l = left;
    int r = right;
    while(l <= r) {
        while(*(array + l) < pivot) ++l;
        while(*(array + r) > pivot) --r;
        if(l <= r){
            swap(array + l, array + r);
            ++l;
            --r;
        }
    }
    if(left < r) quicksort(array, left, r);
    if(right > l) quicksort(array, l, right);
}
void swap(int* left, int* right) {
    int tmp = *left;
    *left = *right;
    *right = tmp;
}


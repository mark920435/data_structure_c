//
//  mergesort.c
//  mergesort
//
//  Created by Mark on 5/9/23.
//

#include "mergesort.h"

void merge_sort(int* array, int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);
        merge(array, left, mid, right);
    }
}

void merge(int* array, int left, int mid, int right) {
    int l = left;
    int r = mid + 1;
    int* tmp = (int*)malloc((right - left + 1) * sizeof(int));
    int tmp_index = 0;
    
    while(l <= mid && r <= right) {
        if(*(array + l) <= *(array + r)) {
            *(tmp + tmp_index) = *(array + l);
            ++tmp_index;
            ++l;
        }
        else {
            *(tmp + tmp_index) = *(array + r);
            ++tmp_index;
            ++r;
        }
    }
    while(l <= mid) {
        *(tmp + tmp_index) = *(array + l);
        ++tmp_index;
        ++l;
    }
    while(r <= right) {
        *(tmp + tmp_index) = *(array + r);
        ++tmp_index;
        ++r;
    }
    
    // copy back
    --tmp_index;
    while(tmp_index >= 0) {
        *(array + left + tmp_index) = *(tmp + tmp_index);
        --tmp_index;
    }
    
    free(tmp);
}

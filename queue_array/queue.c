//
//  queue.c
//  queue_array
//
//  Created by Mark on 5/8/23.
//


#include "queue.h"

// 0 1 2
// f     t

MQueue* mqueue_new(int capacity) {
    MQueue* mqueue = malloc(sizeof(MQueue));
    mqueue->capacity = capacity;
    mqueue->size = 0;
    mqueue->front = 0;
    mqueue->tail = 0;
    mqueue->data = (int*)malloc(capacity*sizeof(int));
    return mqueue;
}

void mqueue_push(MQueue* mqueue, int data) {
    if(mqueue_is_full(mqueue)) {
        printf("the queue is full\n");
        exit(-1);
    }
    ++mqueue->size;
    *(mqueue->data + mqueue->tail) = data;
    mqueue->tail = (mqueue->tail + 1) % (mqueue->capacity);
}

int mqueue_pop(MQueue* mqueue){
    if(mqueue_is_empty(mqueue)) {
        printf("the queue is empty\n");
        exit(-1);
    }
    int data = *(mqueue->data + mqueue->front);
    mqueue->front = (mqueue->front + 1) % (mqueue->capacity);
    --mqueue->size;
    return data;
}

bool mqueue_is_empty(MQueue* mqueue) {
    return mqueue->size == 0;
}

bool mqueue_is_full(MQueue* mqueue) {
    //printf("mqueue->front: %d, (mqueue->tail + 1) mod (mqueue->capacity): %d\n", mqueue->front, (mqueue->tail + 1) % (mqueue->capacity));
    return mqueue->size >= mqueue->capacity;
}

void mqueue_destroy(MQueue* mqueue) {
    free(mqueue->data);
    free(mqueue);
}

void mqueue_print(MQueue* mqueue) {
    printf("front: %d, tail: %d\n", mqueue->front, mqueue->tail);
    for(int i = 0; i < mqueue->size; ++i) {
        printf("%d, ",*(mqueue->data + ((mqueue->front + i) % (mqueue->capacity))));
    }
    printf("\n");
}

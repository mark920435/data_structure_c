//
//  queue.h
//  queue_array
//
//  Created by Mark on 5/8/23.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct MyQueue {
    int* data;
    int capacity;
    int size;
    int front;
    int tail;
} MQueue;

MQueue* mqueue_new(int capacity);
void mqueue_push(MQueue* mqueue, int data);
int mqueue_pop(MQueue* mqueue);
bool mqueue_is_empty(MQueue* mqueue);
bool mqueue_is_full(MQueue* mqueue);
void mqueue_destroy(MQueue* mqueue);

void mqueue_print(MQueue* mqueue);

#endif /* queue_h */

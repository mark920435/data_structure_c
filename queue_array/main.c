//
//  main.c
//  queue_array
//
//  Created by Mark on 5/8/23.
//

#include <stdio.h>
#include "queue.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    MQueue* mqueue = mqueue_new(5);
    mqueue_push(mqueue, 0);
    mqueue_print(mqueue);
    
    mqueue_push(mqueue, 1);
    mqueue_print(mqueue);
    
    mqueue_pop(mqueue);
    mqueue_print(mqueue);
    mqueue_pop(mqueue);
    mqueue_print(mqueue);
    
    
    mqueue_push(mqueue, 0);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 1);
    mqueue_print(mqueue);
    mqueue_pop(mqueue);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 2);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 3);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 4);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 5);
    mqueue_print(mqueue);
    mqueue_push(mqueue, 6);
    mqueue_print(mqueue);
    
    mqueue_destroy(mqueue);
    
    return 0;
}

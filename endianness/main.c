//
//  main.c
//  endianness
//
//  Created by Mark on 5/8/23.
//

#include <stdio.h>

void print_memory(char* start, int n) {
    for(int index = 0; index < n; ++index) {
        printf("%x", *(start + index));
        printf("\n");
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i = 0x12345678;
    print_memory((char*)&i, sizeof(i));
    return 0;
}

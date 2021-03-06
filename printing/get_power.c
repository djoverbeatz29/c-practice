#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef UINT_SIZE
    #define UINT_SIZE sizeof(unsigned int)
#endif

unsigned int get_uint(int limit) {
    unsigned int my_uint=0;
    
    while (my_uint == 0 || my_uint>limit) {
        printf("Please enter an integer up to %d: ", limit);
        scanf("%u", &my_uint);
    }
    printf("\n");
    return my_uint;
}

int main(void) {
    int test_int;
    unsigned int base, list_len;
    unsigned int* num_list;

    printf("Enter an integer. If it ain't an integer, weird shit gon happen: ");
    scanf("%d", &test_int);
    printf("Okay, here's your 'integer': %d\n", test_int);

    // base = get_uint(100);
    // list_len = get_uint(10);

    // num_list = (unsigned int*) malloc(list_len * UINT_SIZE);
    // if (num_list == NULL) {
    //     fprintf(stderr, "Memory not allocated. Exiting...\n");
    //     exit(-1);
    // }

    // for (int i=0; i<list_len; i++) {
    //     num_list[i] = (unsigned int)pow(base, i);
    //     printf("%u^%d = %u\n", base, i, num_list[i]);
    // }

    return 0;
}
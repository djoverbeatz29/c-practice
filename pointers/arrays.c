#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* get_rand_int_array() {
    static int arr_int[10];
    srand((unsigned)time(NULL));

    for (int i=0; i<10; i++) {
        arr_int[i]=rand();
        printf("arr[%d]=%d\n", i, arr_int[i]);
    }
    printf("\n\n");

    return arr_int;
}

float* get_rand_float_array() {
    static float arr_float[10];

    srand((unsigned int)time(NULL));

    for (int i=0; i<10; i++) {
        arr_float[i]=1.0 * (float)rand();
        printf("arr[%d]=%f\n", i, arr_float[i]);
    }
    printf("\n\n");

    return arr_float;
}

int main() {
    int *arr_int=get_rand_int_array();
    float *arr_float=get_rand_float_array();

    for (int i=0; i<10; i++) {
        printf("*(arr_int+%d) = %d\n", i, *(arr_int+i));
        printf("arr_int+%d = %d\n", i, arr_int+i);
    }
    for (int i=0; i<10; i++) {
        printf("*(arr_float+%d) = %f\n", i, *(arr_float+i));
        printf("arr_float+%d = %d\n", i, arr_float+i);
    }

    return 0;
}
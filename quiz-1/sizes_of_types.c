#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Size of short int: %lu\n", sizeof(short int));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of float: %lu\n", sizeof(float));
    printf("Size of double: %lu\n", sizeof(double));
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of unsigned int: %lu\n", sizeof(unsigned int));
    printf("Size of long long int: %lu\n", sizeof(long long int));

    return 0;
}
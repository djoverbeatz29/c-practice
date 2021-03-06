#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int int1, int2;
    printf("Enter two integers, separated by a space: ");
    scanf("%d %d", &int1, &int2);

    printf("Here were your two integers: (%d, %d)\n", int1, int2);
    printf("And here they are, divided: %f\n", int2 != 0 ? 1.0 * int1 / int2 : 0);

    return 0;
}
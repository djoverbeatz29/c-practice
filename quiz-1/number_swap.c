#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int temp;

    if (argc != 3) {
        printf("You must supply exactly two arguments.");
    }
    else {
        printf("Here are your integers: %d, %d\n", argv[1], argv[2]);
        printf("Now we gon swap these mofos... shazam!\n");
        temp = *argv[1];
        *argv[1]=*argv[2];
        *argv[2] = temp;
        printf("Did they swap? %d, %d\n", argv[1], argv[2]);
    }

    return 0;
}
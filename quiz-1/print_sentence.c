#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* sentence=malloc(50);
    
    printf("Enter a sentence here: ");
    scanf("%[^\n]*s", sentence);

    printf("Here was your sentence:\n%s\n", sentence);

    return 0;
}
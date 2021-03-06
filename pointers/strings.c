#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char my_name[]="Jack Overby";
    char my_name_2[]="Jeque Overbinho";
    int my_len=strlen(my_name);
    int my_len_2=strlen(my_name_2);

    printf("Length of %s = %d\n", my_name, my_len);
    printf("Length of %s = %d\n", my_name_2, my_len_2);
    printf("%s = %s? %s\n", my_name, my_name_2, strcmp(my_name, my_name_2) ? "False" : "True");
    
    return 0;
}
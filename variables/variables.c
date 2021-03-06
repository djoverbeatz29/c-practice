#include <stdio.h>

// If declared outside of function, use extern. Else, don't!
// extern int a, b, c;
// extern float f;

#define LUV 69
#define DEBBIL 666

int main() {
    int a, b, c;
    float f, g;

    a = 10;
    b = 69;
    c = a + b;
    f = 1.0 * 666 / 69;
    g = 1.0 * a / b;

    printf("%d + %d = %d\n", a, b, c);
    printf("f is a float equal to %f\n", f);
    printf("g = %d / %d = %f\n", a, b, g);
    printf("LUV TIMES DEBBIL EEKWULZ %d.\n", LUV * DEBBIL);
    printf("%ld\n", 6969696969L);

    return 0;
}
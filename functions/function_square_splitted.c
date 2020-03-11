#include <stdio.h>

int square(int x); // Declaration. Function prototype

int main() {
    int x = 5;
    int result = square(x);

    printf("%d squared is %d.\n", x, result);
    return 0;
}

int square(int x) { // Definition.
    return x * x;
}
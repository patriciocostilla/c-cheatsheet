#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int x = 5;
    int result = square(x);

    printf("%d squared is %d.\n", x, result);
    return 0;
}
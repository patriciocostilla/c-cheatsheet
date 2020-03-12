#include <stdio.h>

int main() {
    int x = 12;
    int *p = NULL;
    int **ptr = NULL;
    p = &x;
    ptr = &p;
    printf("The value of x is %d\n", **ptr);

    return 0;
}
#include <stdio.h>

int main() {
    int j = 63;
    int *p1 = NULL;
    int **p2 = NULL;
    p1 = &j;
    p2 = &p1;
    printf("j value is %d\n", j);
    printf("j address is %x\n", &j);
    printf("p1 value is %x\n", p1);
    printf("p1 is pointing to %d\n", *p1);
    printf("p2 value is %x\n", p2);
    printf("p2 is pointing to %d through %x\n", **p2, *p2);
    return 0;
}
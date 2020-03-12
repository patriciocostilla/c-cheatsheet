#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};
    int *ptr = NULL;
    int i;
    printf("The array address is %x\n", a);
    ptr = a; // ptr = a can be thought of as ptr = &a[0].
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}
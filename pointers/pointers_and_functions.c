#include <stdio.h>

void swap(int *num1, int *num2);

int main() {
    int x = 1;
    int y = 2;
    printf("x = %d | y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d | y = %d\n", x, y);
    return 0;
}

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
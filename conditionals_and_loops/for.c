#include <stdio.h>

int main() {
    int i;
    int max = 10;
    for (i = 1; i < max; i++) {
        printf("%d\n", i);
    }
    // The for loop can contain multiple expressions separated by commas in each part
    int x;
    int y;
    int num = 10;
    for (x = 0, y = num; x < y; x++, y--) {
        printf("x = %d | y = %d\n", x, y);
    }
    return 0;
}
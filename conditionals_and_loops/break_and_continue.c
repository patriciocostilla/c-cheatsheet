#include <stdio.h>

int main() {
    int num = 5;
    // Use break to exit a loop
    printf("Using break:\n");
    while (num > 0) {
        num--;
        if (num == 3) {
            break;
        }
        printf("Count = %d\n", num);
    }
    num = 5;
    // Use continue to skip an iteration
    printf("\nUsing continue:\n");
    while (num > 0) {
        num--; // If num is decremented after the continue statement an infinite loop would be created
        if (num == 3) {
            continue;
        }
        printf("Count = %d\n", num);
    }
    return 0;
}
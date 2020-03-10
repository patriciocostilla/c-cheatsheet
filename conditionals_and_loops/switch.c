#include <stdio.h>

int main() {
    int number = 4;
    switch (number) {
        case 1:
            printf("One.\n");
            break;
        case 2:
            printf("Two.\n");
            break;
        case 3:
            printf("Three.\n");
            break;
        default:
            printf("More than three.\n");
    }
    return 0;
}
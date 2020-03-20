#include <stdio.h>

int main() {
    char input[10];
    int num;

    printf("Enter a number: ");
    fgets(input, sizeof input, stdin);
    num = atoi(input); // atoi -> int | atof -> float/double | atol -> long int
    printf("Your number is %d.\n", num);

    return 0;
}
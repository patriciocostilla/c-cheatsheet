#include <stdio.h>

int main() {
    char first_name[25];
    int age;
    printf("Enter your first name and age: ");
    scanf("%s %d", first_name, &age); // an array name acts as a pointer.
    printf("Hello %s, you're %d", first_name, age);
    // scanf() stops reading input when it reaches a space.
    return 0;
}
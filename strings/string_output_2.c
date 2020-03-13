#include <stdio.h>

int main() {
    char city[40];
    printf("Enter your favoritce city: ");
    fgets(city, 40, stdin);
    puts(city); // adds a newline to output.
    return 0;
}
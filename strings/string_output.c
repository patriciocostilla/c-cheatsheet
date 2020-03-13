#include <stdio.h>

int main() {
    char city[40];
    printf("Enter your favorite city: ");
    fgets(city, 40, stdin);
    fputs(city, stdout);
    printf(" is a fun city.\n");
    return 0;
}
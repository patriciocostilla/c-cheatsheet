#include <stdio.h>

int main() {
    /*To read a string with spaces, use the gets() function. 
    It reads input until a terminating newline is reached (the Enter key is pressed).*/
    printf("Enter your full name: ");
    char full_name[45];
    gets(full_name);
    printf("Your full name es %s\n", full_name);
    return 0;
}
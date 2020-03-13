#include <stdio.h>

int main() {
    /*
    A safer alternative to gets() is fgets(), which reads up to a specified number of characters. 
    This approach helps prevent a buffer overflow, which happens when the string array 
    isn't big enough for the typed text.
    */
    printf("Enter your full name: ");
    char full_name[45];
    fgets(full_name, 45, stdin); // fgets() reads only n-1 characters from stdin because there must be room for '\0'.
    printf("Your full name es %s\n", full_name);
    return 0;
}
/* 
The fgets() arguments are the string name, the number of characters to read, 
and a pointer to where you want to read the string from. 
stdin means to read from the standard input, which is the keyboard.
Another difference between gets and fgets is that the newline character is stored by fgets.
*/
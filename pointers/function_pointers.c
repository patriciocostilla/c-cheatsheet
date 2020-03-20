#include <stdio.h>

void say_hello(int num_times); 

int main() {
    void (*funptr)(int);
    funptr = say_hello;
    funptr(3);

    return 0;
}

void say_hello(int num_times) {
    for (int k = 0; k < num_times; k++) {
        printf("Hello.\n");
    }
}

/* 
A function name points to the start of executable code, just as an array name points to its first element. 
Therefore, although statements such as funptr = &say_hello and (*funptr)(3) are correct, 
it isn't necessary to include the address operator & and the indirection operator * in the function assignment and function call.
*/
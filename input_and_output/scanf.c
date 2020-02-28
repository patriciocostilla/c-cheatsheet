#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);

    return 0;
}
/*
scanf() stops reading as soon as it encounters a space, 
so text such as "Hello World" is two separate inputs for scanf().
*/
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
Format specifiers begin with a percent sign % and are used to assign values to corresponding arguments after the control string. 
Blanks, tabs, and newlines are ignored.
A format specifier can include several options along with a conversion character:
%[*][max_field]conversion character
The optional * will skip the input field.
The optional max_width gives the maximum number of characters to assign to an input field.
The conversion character converts the argument, if necessary, to the indicated type:
d decimal
c character
s string
f float
x hexadecimal
*/
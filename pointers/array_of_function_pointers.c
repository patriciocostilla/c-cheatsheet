#include <stdio.h>
/* 
An array of function pointers can replace a switch or an if statement for choosing an action
*/
int add(int num1, int num2);
int substract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);


int main() {    
    int (*op[4])(int, int);
    op[0] = add;
    op[1] = substract;
    op[2] = multiply;
    op[3] = divide;

    int x, y, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Enter:\n  0 to add\n  1 to substract\n  2 to multiply\n  3 to divide\n");
    scanf("%d", &choice);

    int result = op[choice](x, y);
    printf("%d\n", result);

    return 0;
}

int add(int num1, int num2) {return num1 + num2;}
int substract(int num1, int num2) {return num1 - num2;}
int multiply(int num1, int num2) {return num1 * num2;}
int divide(int num1, int num2) {if (num2 == 0) return 0; else return num1 / num2;}
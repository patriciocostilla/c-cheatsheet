#include <stdio.h>

int main() {
    char a[100];
    // La mayoría de los compiladores muestra una advertencia sobre esta función
    gets(a);
    printf("You entered %s\n", a);

    return 0;
}
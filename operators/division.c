#include <stdio.h>

int main() {
    int i1 = 10;
    int i2 = 3;
    int quotient, remainder;
    float f1 = 4.2;
    float f2 = 2.5;
    float result;

    quotient = i1 / i2; // Retorna la división entera, ya que ambos valores son del tipo int
    remainder = i1 % i2; // Retorna el resto de la división entera
    printf("%d / %d = ", i1, i2);
    printf("quotient: %d\t", quotient);
    printf("remainder: %d\n", remainder);
    result = f1 / f2; // Realiza la división real, porque al menos uno de los dos valores no es del tipo int
    printf("%.2f / %.2f = %.2f\n", f1, f2, result);

    return 0;
}
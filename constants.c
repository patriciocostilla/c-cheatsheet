#include <stdio.h>

// Se pueden definir constantes usando la siguiente directiva de compilador
#define PI 3.14

int main() {
    // O utilizando la palabra clave const
    const float E = 2.718;
    printf("Pi: %f\n", PI);
    printf("E: %f\n", E);
    return 0;
}
/* 
La diferencia fundamental es que utilizando la directiva de 
compilador no se necesita reservar memoria para almacenar la constante.
*/
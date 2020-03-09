#include <stdio.h>

int main() {
    int y;
    int x = 3;

    y = (x >= 5) ? 5 : x;
    /*
    Es equivalente a:
    if (x >= 5) {
        y = 5;
    }
    else {
        y = x;
    }
    */
    return 0;
}
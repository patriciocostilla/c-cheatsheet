#include <stdio.h>

void test(int k);

int main() {
    int i = 0;
    printf("The address of i is %x\n", &i);
    test(i);
    printf("The address of i is %x\n", &i);
    test(i);
    // The address of a variable stays the same from the time it is declared until the end of its scope.
    return 0;
}

void test(int k) {
    printf("The address of k is %x\n", &k);
}
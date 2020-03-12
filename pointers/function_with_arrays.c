#include <stdio.h>

int add_up(int *a, int num_elements);

int main() {
    int orders[5] = {1,2,3,4,5};
    printf("Total orders is %d\n", add_up(orders, 5));

    return 0;
}

int add_up(int *a, int num_elements) {
    int total = 0;
    for (int i = 0; i < num_elements; i++) {
        total = total + a[i];
    }
    return total;
}
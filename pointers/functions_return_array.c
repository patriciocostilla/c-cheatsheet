#include <stdio.h>

int *get_evens();

int main() {
    int *a; // Declare a pointer to store the array returned
    a = get_evens();
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]); // a[i] is the same as *(a + i).
    }
    return 0;
}

int *get_evens() {
    static int nums[5]; // Declare static to pass out of function
    int even = 0;
    for (int i = 0; i < 5; i++) {
        even = even + 2;
        nums[i] = even;
    }
    return nums;
}
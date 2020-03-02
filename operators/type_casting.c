#include <stdio.h>

int main() {
    float average;
    int total = 23;
    int count = 4;

    average = (float) total / count;
    /* average = 5.75 */
    printf("average = %.2f\n", average);
    return 0;
}
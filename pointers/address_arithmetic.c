#include <stdio.h>

int main() {
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = NULL;

    ptr = a;  /* point to the first array element */
    printf("%d  %x\n", *ptr, ptr);  /* 22 */
    ptr++;
    printf("%d  %x\n", *ptr, ptr);  /* 33 */
    ptr += 3;
    printf("%d  %x\n", *ptr, ptr);  /* 66 */
    ptr--;
    printf("%d  %x\n", *ptr, ptr);  /* 55 */
    ptr -= 2;
    printf("%d  %x\n", *ptr, ptr);  /* 33 */ 
    return 0;
}
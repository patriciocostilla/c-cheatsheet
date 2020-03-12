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
    /* When a pointer is incremented, the memory address increases by the number of bytes being pointed to. 
    In the program above, the pointer increases by 4 
    when the increment operator is used (ptr++)
    because the pointer is pointing to an int.
    You can also use the ==, <, and > operators to compare pointer addresses.
    */
}
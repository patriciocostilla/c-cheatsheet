#include <stdio.h>

int main() {
    /* %[-][width].[precision]conversion character */
    printf("Color: %s, Number: %d, float: %5.2f \n", "red", 42, 3.14159);
    /* Color: red, Number: 42, float:  3.14  */

    printf("Pi = %3.2f", 3.14159); 
    /* Pi = 3.14 */

    printf("Pi = %8.5f", 3.14159); 
    /* Pi =   3.14159 */

    printf("Pi = %-8.5f", 3.14159); 
    /* Pi = 3.14159 */

    printf("There are %d %s in the tree.", 22, "apples");
    /* There are 22 apples in the tree. */ 
}
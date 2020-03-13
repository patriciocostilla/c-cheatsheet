#include <stdio.h>

int main() {
    char str_1[6] = "hello"; // str length + 1 for '\0' end character.
    char str_2[] = "world"; // auto calc str length.
    char str_3[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // add '\0' end character manually.
    char *str_p = "stuff"; // string pointer declaration, is considered a constant.

    return 0;
}
/*
A string literal is a text enclosed in double quotation marks.
A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string.
*/
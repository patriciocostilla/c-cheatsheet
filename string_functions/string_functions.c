#include <stdio.h>
#include <string.h>

int main() {
    char s1[21] = "The grey fox";
    char s2[21] = " jumped.";

    strcat(s1, s2);
    printf("%s\n", s1);
    printf("The length of s1 is %ld.\n", strlen(s1));

    strcpy(s1, s2); 
    printf("s1 is now %s\n", s1);
    return 0;
}
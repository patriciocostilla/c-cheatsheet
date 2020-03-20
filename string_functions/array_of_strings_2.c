#include <stdio.h>

int main() {
    char *trip[3] = {
        "passport",
        "suitcase",
        "ticket"
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(trip + i)); //same as trip[i]
    }
    printf("\n");

    trip[1] = "hello";
    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(trip + i)); //same as trip[i]
    }

    return 0;
}
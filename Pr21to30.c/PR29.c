//This program is written by 24DCS145_JEMIT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int initial_size = 20;
    int new_size = 50;

    str = (char *)calloc(initial_size, sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    strcpy(str, "Hello, World!");
    printf("Initial string: %s\n", str);

    str = (char *)realloc(str, new_size * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    strcat(str, " Welcome to dynamic memory allocation with JEMIT.");
    printf("Modified string: %s\n", str);

    free(str);
    printf("\n\n24dDCS145_JEMIT");
    return 0;
}

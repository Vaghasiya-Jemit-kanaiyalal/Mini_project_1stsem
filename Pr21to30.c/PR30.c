//This program is witten by 24DCS145_JEMIT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    FILE *file;
    char word[100];

    file = fopen("Demo.txt", "w");
    if (file == NULL) {
        return 1;
    }

    fprintf(file, "CHARUSAT\n");
    fclose(file);

    file = fopen("Demo.txt", "r");
    if (file == NULL) {
        return 1;
    }

    while (fscanf(file, "%99s", word) != EOF) {
        reverseString(word);
        printf("%s\n", word);
    }

    fclose(file);
    printf("24DCS145_JEMIT");
    return 0;
}

//This program is written by 24DCS145_JEMIT
#include <stdio.h>

int main() {
    FILE *file;
    int mark, choice;

    file = fopen("marks.txt", "w");
    if (file == NULL) {
        return 1;
    }

    printf("Enter student marks (enter -1 to stop): \n");
    while (1) {
        printf("Mark: ");
        scanf("%d", &mark);
        if (mark == -1) {
            break;
        }
        putw(mark, file);
    }

    fclose(file);

    file = fopen("marks.txt", "r");
    if (file == NULL) {
        return 1;
    }

    printf("\nStudent Marks Recorded:\n");
    while ((mark = getw(file)) != EOF) {
        printf("%d\n", mark);
    }

    fclose(file);
    printf("\n24DCS145_JEMIT78");
    return 0;
}

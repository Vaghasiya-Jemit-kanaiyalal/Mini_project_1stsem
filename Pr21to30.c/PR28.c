// This program is written by 24DCS145_JEMIT
#include <stdio.h>

int main() {
    int i, marks[10], fail = 0, pass = 0, firstClass = 0, distinction = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter marks of student[%d]: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] >= 70 && marks[i] <= 100) {
            distinction++;
        } else if (marks[i] >= 60 && marks[i] <= 69) {
            firstClass++;
        } else if (marks[i] >= 50 && marks[i] <= 59) {
            pass++;
        } else if (marks[i] >= 0 && marks[i] <= 40) {
            fail++;
        }
    }

    printf("DISTINCTION: %d FIRST CLASS: %d PASS: %d FAIL: %d\n", distinction, firstClass, pass, fail);
    printf("\n\n24DCS145_JEMIT");

    return 0;
}

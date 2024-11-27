#include <stdio.h>
#include <unistd.h>

int main() {
    int seconds;

    printf("Enter the  seconds to countdown: ");
    scanf("%d", &seconds);

    if (seconds < 0)
     {
        printf("Invalid input. Please enter a non-negative number.\n");
    } 
    else {
        while (seconds > 0) {
            printf("Seconds remaining :%d\n", seconds);
            seconds--;
            sleep(1);
        }
        printf("Countdown completed!\n");
    }

    return 0;
}

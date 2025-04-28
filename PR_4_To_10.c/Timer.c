//This is very use full program for counter i have use new library for sleep(1) to Delay by 1 second .....
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

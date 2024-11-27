//This program is written by 24DCS145_JEMIT
#include <stdio.h>

void swapBalances(float *account1, float *account2) {
    float temp;
    temp = *account1;
    *account1 = *account2;
    *account2 = temp;
}

int main() {
    float account1Balance, account2Balance;

    printf("Enter balance of Account 1: ");
    scanf("%f", &account1Balance);
    printf("Enter balance of Account 2: ");
    scanf("%f", &account2Balance);

    printf("\nBalances before swap:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);

    swapBalances(&account1Balance, &account2Balance);

    printf("\nBalances after swap:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);

    printf("\n\n24DCS145_JEMIT");
    return 0;
}

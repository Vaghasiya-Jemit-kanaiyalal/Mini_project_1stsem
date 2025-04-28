//A very simple program to find Population .......
#include <stdio.h>
int main()
{
    float total, men, women, litmen, litwomen, ilitmen, ilitwomen, literacy;
    total = 1441981744;
    women = 0.484 * total;
    men = total - women;

    literacy = 0.8595 * total;
    litmen = 0.8095 * men;
    litwomen = 0.6284 * women;
    ilitmen = men - litmen;
    ilitwomen = women - litwomen;
    printf("------------------Popolation of INDIA------------------\n");
    printf("Total population is : %f", total);
    printf("\nTotal Male  population is : %f", men);
    printf("\nTotal Female  population is : %f", women);
    printf("\nTotal Lit.Male population is : %f", litmen);
    printf("\nTotal Lit.Female  population is : %f", ilitwomen);
    printf("\nTotal Ilitr.male  population is : %f", ilitmen);
    printf("\nTotal Ilit.Female  population is : %f", ilitwomen);
    return 0;
}

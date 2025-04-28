//This program is for  multiplication tabe For better understanding output of this program i wii sugest enterl vertical 10 and horizontal 20 
#include <stdio.h>
int main()
{
    int c;
    printf("Enter the size of table vertically : ");
    scanf("%d", &c);

    int r;
    printf("Enter the size of table horizontally : ");
    scanf("%d", &r);

    printf("\nMultiplication table (%d x %d):\n", c, r);

    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    printf("\n\n24DCS145_JEMIT\n");
    return 0;
}

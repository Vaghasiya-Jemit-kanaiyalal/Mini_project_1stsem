#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("TABLE.txt", "w");

    if (ptr == NULL)
    {
        printf("Error opening the file!\n");
        return 1;
    }

    int num = 5;
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i + 1, num * (i + 1));
    }

    fclose(ptr); // Close the file after use
    return 0;
}
//OUTPUT :
/*5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50*/

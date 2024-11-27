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

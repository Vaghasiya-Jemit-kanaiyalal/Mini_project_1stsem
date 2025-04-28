#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("jemit.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("The value of num is : %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is : %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is : %d\n", num);
    // Very good and important
    fclose(ptr);
    return 0;
}
/*If jemit.txt contain this 7 14 21 then,
    The value of num is : 7
The value of num is : 14
The value of num is : 21
*/

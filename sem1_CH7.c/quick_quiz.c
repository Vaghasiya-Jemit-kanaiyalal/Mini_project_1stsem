//File exits or not 
//Ans : If file does not exits and you select "read mode" it will retun NULL
#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr=fopen("jemit1.txt","r");

    if(ptr==NULL)
    {
        printf("File does not exits... sorry");
    }
    else{
        for(int i=0;i<=2;i++)
        {
            int num;
             fscanf(ptr,"%d",&num);
    printf("The value of num is : %d\n",num);
        }

    }
    //Very good and important
    fclose(ptr);
    return 0;
}
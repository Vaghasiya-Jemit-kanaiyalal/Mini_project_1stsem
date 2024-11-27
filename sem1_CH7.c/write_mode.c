//Write mode akhi khali kri de file ne pachi je lkvu hoy e lkhe took a over write kre enu solution che apend mode
#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("vaghasiya.txt","w");
    int num=43245;
    
    fprintf(fptr,"%d",&num);
   

    //Very good and important
    fclose(fptr);
    return 0;
    }
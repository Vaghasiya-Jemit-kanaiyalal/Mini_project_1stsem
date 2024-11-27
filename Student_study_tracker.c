#include<stdio.h>

void goal()
{
    int goal,total_hours=0,daily_hours;
    printf("\nWelcome to study tracker APP....!");

    printf("\nEnter your weekly goal : ");
scanf("%d",&goal);

while(goal>total_hours)
{

    printf("\nEnter your today studied hours =");
    scanf("%d",&daily_hours);
  
total_hours+=daily_hours;

if(total_hours<goal)
printf("\nYou are not reached your goal and your total hours is : %d",total_hours);



if(total_hours>=goal){
int Goal=goal;
printf("\nCongratulation ....! You are reached at your goal hours : %d",Goal);
break;
}
}




    
    
    return;}
    int main()
    {
        goal();
        return 0;
    }
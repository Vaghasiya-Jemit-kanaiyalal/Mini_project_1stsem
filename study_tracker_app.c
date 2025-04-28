/*I created a Study Tracker App that asks the user to set a weekly study hours goal.
Each day, the user enters the number of hours studied, and the app adds it up.
When the total hours meet or exceed the goal, the program congratulates the user and stops.*/

#include<stdio.h>

void goal()
{
    int goal,total_hours=0,daily_hours;
    printf("\nMade By Jemit K. Vaghasiya");
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
/*OUTPUT :
Made By Jemit K. Vaghasiya
Welcome to study tracker APP....!
Enter your weekly goal : 30

Enter your today studied hours =2  

You are not reached your goal and your total hours is : 2
Enter your today studied hours =12

You are not reached your goal and your total hours is : 14
Enter your today studied hours =6

You are not reached your goal and your total hours is : 20
Enter your today studied hours =2

You are not reached your goal and your total hours is : 22
Enter your today studied hours =6*/





    
    

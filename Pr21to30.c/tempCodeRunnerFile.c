#include <stdio.h>
#include <string.h>
//#include <conio.h>
#define N 5
#define P printf
#define S scanf
#define T struct team
struct team
{
char name[15];
char type[15];
struct coach
{
char cname[30];
int age;
int ex;
} c[N]; // array of coach details
};
T t[N]; // global array of team details which contains array of coach details
int n = 0; // Global variable to track the number of teams
void add()
{
P("\nEnter team name: ");
gets(t[n].name);
P("Enter sport type: ");
gets(t[n].type);
P("Enter coach's name: ");
gets(t[n].c->cname);
P("\tEnter coach's age: ");
S("%d", &t[n].c->age);
P("\tEnter coach's experience: ");
S("%d", &t[n].c->ex);
P("\nTeam added successfully.\n\n");
n++; // team is added
}
void search()
{
char sname[20];
int f = 0, i;
P("Enter the team name: ");
gets(sname);
for (i = 0; i < n; ++i)
{
if (strcmp(t[i].name, sname) == 0)
{
P("\n----------TEAM FOUND----------\n\n");
P("Team name: %s\n", t[i].name);
P("Sport type: %s\n", t[i].type);
P("Coach's name: %s\n", t[i].c->cname);
P("\tCoach's age: %d\n", t[i].c->age);
P("\tCoach's experience: %d\n\n", t[i].c->ex);
f = 1;
break;
}
}
if (f == 0)
{
P("Team Not Found!\n\n");
}
}
void display()
{
int i;
if (n == 0)
{
P("No teams available\n");
return;
}
P("---------------\nTEAM DETAILS\n---------------\n");
for (i = 0; i < n; ++i)
{
P("TEAM %d:\n", i + 1);
P("Team name: %s\n", t[i].name);
P("Sport type: %s\n", t[i].type);
P("Coach's name: %s\n", t[i].c->cname);
P("\tCoach's age: %d\n", t[i].c->age);
P("\tCoach's experience: %d\n", t[i].c->ex);
P("----------------------------------------\n");
}
}
int main()
{
int choice;
//clrscr();
while (1)
{
P("--------------------\nSPORTS TEAM SYSTEM\n--------------------\n");
P("1. Add Team\n");
P("2. Search Team\n");
P("3. Display Team\n");
P("4. Exit\n");
P("Enter your choice: ");
S("%d", &choice);
getchar(); //buffer
switch (choice)
{
case 1:
add();
break;
case 2:
search();
break;
case 3:
display();
break;
case 4:
P("Exiting...\n\n");

return 0;
default:
P("\nInvalid choice! Please try again.\n");
}
}
P("\n\n24DCS145_JEMIT");

return 0;
}
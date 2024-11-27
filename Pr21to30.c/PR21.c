//This program is written by 24DCS145_JEMIT
#include<stdio.h>
int high(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
   
    return max;
   
}
int low(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
   
    return min;
   
}


int add(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
sum+=arr[i];
       
}
return sum;
}

int Average(int sum,int n)
{
    float a=sum/n;
    return a;
}
int main()
{
  int n;
    printf("Enter total students number you want to enter marks : \t");
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++)
     {
         
    printf("Enter CCP marks of student %d : ",i+1);
          scanf("%d",&arr[i]);
         
     }
int sum=add(arr,n);
printf("Total marks is: %d\n",sum);
float a=Average(sum,n);
printf("Total average marks is: %2f\n",a);
int mx=high(arr,n);
printf("Highest marks  is: %d\n",mx);
int mn=low(arr,n);
printf("Lowest marks is: %d\n",mn);
printf("\n\n24DCS145_JEMIT\n");
}

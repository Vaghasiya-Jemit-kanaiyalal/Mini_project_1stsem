//Simple program of pattern for printig with use of 1 0 
#include<stdio.h> 
int main() 
{ 
int n; 
printf("Enter the number of rows : "); 
scanf("%d",&n); 
for(int i=1; i<=n; i++){ 
for(int j=1; j<=i; j++){ 
if(j%2 != 0) printf("1 "); 
else printf("0 "); 
} 

printf("\n"); 
} 
printf("\n\n24DCS145_JEMIT\n");
return 0;
}

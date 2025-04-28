//Concpet an d use of triple conditional satement...
#include <stdio.h>

int main() {
    int marks;
    
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    
    if (marks < 0 || marks > 100) {
        printf("Invalid input. Marks should be between 0 and 100.\n");
    } else {
        char grade = (marks >= 90) ? 'A' : 
                     (marks >= 80) ? 'B' : 
                     (marks >= 70) ? 'C' : 
                     (marks >= 60) ? 'D' : 'F';
        
        printf("Grade: %c\n", grade);
    }

    return 0;
}

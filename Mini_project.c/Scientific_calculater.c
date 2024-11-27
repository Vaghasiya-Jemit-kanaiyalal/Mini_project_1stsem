#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void basicOperation();
void advancedOperation();
void displayMenu();

int main()
{
    int choice;
    while(1) {
        displayMenu();
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            basicOperation();
            break;

        case 2:
            advancedOperation();
            break;

        case 3:
            printf("Exiting the program. Thank You!\n");
            exit(0);

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void displayMenu()
{
    printf("\n WELCOME TO BASIC SCIENTIFIC CALCULATOR\n");
    printf("==============================\n");
    printf("1. Basic Operations (Addition, Subtraction, Multiplication, Division, Percentage).\n");
    printf("2. Advanced Operations (Trigonometry, Logarithmic, Exponentiation).\n");
    printf("3. Exit.\n");
}

void basicOperation()
{
    int number;
    double n1, n2, result;
    printf("\nBasic Operations.\n");
    printf("====================\n");
    printf("1. Addition.\n");
    printf("2. Subtraction.\n");
    printf("3. Multiplication.\n");
    printf("4. Division.\n");
    printf("5. Percentage.\n");
    printf("Enter your choice: ");
    scanf("%d", &number);

    printf("Enter First number: ");
    scanf("%lf", &n1);
    if (number != 5) { 
        printf("Enter Second number: ");
        scanf("%lf", &n2);
    }

    switch (number) {
    case 1:
        result = n1 + n2;
        printf("The addition of %.2lf and %.2lf is: %.2lf\n", n1, n2, result);
        break;

    case 2:
        result = n1 - n2;
        printf("The subtraction of %.2lf and %.2lf is: %.2lf\n", n1, n2, result);
        break;

    case 3:
        result = n1 * n2;
        printf("The multiplication of %.2lf and %.2lf is: %.2lf\n", n1, n2, result);
        break;

    case 4:
        if (n2 != 0) {
            result = n1 / n2;
            printf("The division of %.2lf by %.2lf is: %.2lf\n", n1, n2, result);
        } else {
            printf("Math Error! Division by zero is not allowed.\n");
        }
        break;

    case 5:
        printf("Enter the percentage to calculate (e.g., first number for second number%%): ");
        scanf("%lf", &n2); 
        result = (n1 * n2) / 100;
        printf("%.2lf%% of %.2lf is: %.2lf\n", n2, n1, result);
        break;

    default:
        printf("Invalid operation! Please try again.\n");
    }
}

void advancedOperation()
{
    int choice;
    double num, result;
    printf("\nAdvanced Operations.\n");
    printf("====================\n");
    printf("1. Sine (sin).\n");
    printf("2. Cosine (cos).\n");
    printf("3. Tangent (tan).\n");
    printf("4. Logarithm (log).\n");
    printf("5. Exponentiation (e^x).\n");
    printf("6. Square Root (√x).\n");
    printf("7. Factorial (x!).\n");
    printf("8. Square (x²).\n");
    printf("9. Cube (x³).\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%lf", &num);

    switch (choice) {
    case 1:
        result = sin(num);
        printf("Result (sin) is: %.2lf\n", result);
        break;

    case 2:
        result = cos(num);
        printf("Result (cos) is: %.2lf\n", result);
        break;

    case 3:
        result = tan(num);
        printf("Result (tan) is: %.2lf\n", result);
        break;

    case 4:
        if (num > 0) {
            result = log(num);
            printf("Result (log) is: %.2lf\n", result);
        } else {
            printf("Math Error! Logarithm is defined for positive numbers only.\n");
        }
        break;

    case 5:
        result = exp(num);
        printf("Result (e^%.2lf) is: %.2lf\n", num, result);
        break;

    case 6:
        if (num >= 0) {
            result = sqrt(num);
            printf("Result (√%.2lf) is: %.2lf\n", num, result);
        } else {
            printf("Math Error! Square root of negative numbers is not defined.\n");
        }
        break;

    case 7:
        if (num >= 0 && floor(num) == num) {
            result = 1;
            for (int i = 1; i <= num; i++) {
                result *= i;
            }
            printf("Result (%0.lf!) is: %.0lf\n", num, result);
        } else {
            printf("Math Error! Factorial is defined for non-negative integers only.\n");
        }
        break;

    case 8:
        result = num * num;
        printf("Square of %.2lf is: %.2lf\n", num, result);
        break;

    case 9:
        result = num * num * num;
        printf("Cube of %.2lf is: %.2lf\n", num, result);
        break;

    default:
        printf("Invalid operation! Please try again.\n");
    }
}
/**Made by:
ID NO :24DCS130
ID NO :24DCS140
ID NO :24DCS145 */
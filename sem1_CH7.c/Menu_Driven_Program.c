//i have made a menu drivven program for a restaurrant with the usse of while for infinite staring untill user wants to end and 
//switch case
#include <stdio.h>

int main() {
    int choice, quantity;
    float totalCost = 0;

    printf("Welcome to Foodies Restaurant!\n");
    printf("Here is the menu:\n");
    printf("1. Burger - RS.150\n");
    printf("2. Pizza - RS.200\n");
    printf("3. Pasta - RS.120\n");
    printf("4. Sandwich - RS.100\n");
    printf("5. French Fries - RS.80\n");
    printf("0. Finish Ordering\n");

    while(1) {
        printf("\nEnter the item number to order (0 to finish): ");
        scanf("%d", &choice);

         if (choice == 0) {
            break;
                         }
        
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        
       
        switch (choice) {
            case 1:
            printf("You have choosen %d Burgeer",quantity);
                totalCost += 150 * quantity;
                break;
            case 2:
            printf("You have choosen %d Pizza",quantity);
                totalCost += 200 * quantity;
                break;
            case 3:
            printf("You have choosen %d Pasta",quantity);
                totalCost += 120 * quantity;
                break;
            case 4:
            printf("You have choosen %d Sandwhich",quantity);
                totalCost += 100 * quantity;
                break;
            case 5:
            printf("You have choosen %d Frenchfries",quantity);
                totalCost += 80 * quantity;
                break;
            default:
                printf("Invalid choice! Please select a valid item.\n");
                continue;
        }
    }

    printf("\nYour total cost is: RS.%.2f\n", totalCost);

    return 0;
}

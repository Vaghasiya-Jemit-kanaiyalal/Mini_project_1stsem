//This program is written by 24DCS145_JEMIT
#include <stdio.h>

struct library {
    int accessionnumber;
    char title[30];
    char author[50];
    float price;
    int flag;
};

struct library storage[100]; // Declare a fixed-size array for storage

void display(int n) {
    printf("\n-------- Book Information -------------\n");
    for (int i = 0; i < n; i++) {
        printf("For Book %d:\n", i + 1);
        printf("Accession Number: %d\n", storage[i].accessionnumber);
        printf("Title: %s\n", storage[i].title);
        printf("Author: %s\n", storage[i].author);
        printf("Price: %.2f\n", storage[i].price);
        printf("Issued: %s\n", (storage[i].flag == 1) ? "Yes" : "No");
    }
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter the details of Book %d:\n", i + 1);

        printf("Enter Accession Number: ");
        scanf("%d", &storage[i].accessionnumber);

        printf("Enter Title: ");
        scanf(" %s", storage[i].title); // Safely read a string with spaces

        printf("Enter Author Name: ");
        scanf(" %s", storage[i].author); // Safely read a string with spaces

        printf("Enter Price: ");
        scanf("%f", &storage[i].price);

        printf("Enter the Issued Flag (1 for issued, 0 for not issued): ");
        scanf("%d", &storage[i].flag);
    }

    display(n);
    printf("\n\n24DCS145_JEMIT");
    return 0;
}

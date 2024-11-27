//This program is written by 24DCS145_JEMIT
#include <stdio.h>
 
struct BookDetail {
    char title[100];
    char author[100];
    float amount;
};
 
void displayBookDetails(struct BookDetail book) {
    printf("\nBook Title: %s", book.title);
    printf("\nAuthor Name: %s", book.author);
    printf("\nAmount: %.2f", book.amount);
}
 
int main() {
    struct BookDetail book;
 
    printf("Enter Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);
 
    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
 
    printf("Enter Amount of the Book: ");
    scanf("%f", &book.amount);
 
    printf("\nBook Details:\n");
    displayBookDetails(book);
    printf("\n\n This program is written by 24DCS145_JEMIT ");
 
    return 0;
}


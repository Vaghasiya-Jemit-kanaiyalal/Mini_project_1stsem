//Program for reverse printing pyramid ...
#include <stdio.h>

int main() {
  int n = 5; // Number of rows

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      printf("  "); // Print spaces for the left side of the triangle
    }
    for (int j = 1; j <= i; j++) {
      printf("%d ", j); // Print numbers for the current row
    }
    printf("\n");
  }

  return 0;
}

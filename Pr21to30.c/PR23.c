//This program is written by 24DCS145_JEMIT
#include <stdio.h>


void generate_fibonacci(int n) { int first
= 0, second = 1, next;
printf("Fibonacci Series:\n");
int i;
for (i = 0; i < n; i++) {
if (i == 0) {
printf("%d ", first);
} else if (i == 1) {
printf("%d ", second);
} else {
next = first + second;
first = second; second
= next;
printf("%d ", next);
}
}
printf("\n");
}
int main() {
int n;




printf("Enter the number of terms you want to see in the Fibonacci series: ");
scanf("%d", &n);

if (n <= 0) {
printf("Please enter a positive integer greater than 0.\n");
} else {
generate_fibonacci(n);
}
printf("\n\n24dcs145_JEMIT"); return
0;
}
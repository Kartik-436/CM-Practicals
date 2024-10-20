#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    // Print the first two terms if n >= 1
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    // Generate and print the rest of the terms
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");

    printf("\n\nKartik Garg\nIT-1\n01813203123");
    
    return 0;
}

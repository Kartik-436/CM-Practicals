#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Create an array to store the numbers
    float numbers[n];

    // Take input of the numbers
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];  // Calculate the sum
    }

    // Calculate the average
    avg = sum / n;

    // Display the average
    printf("The average is: %.2f\n", avg);

    printf("\n\nKartik Garg\nIT-1\n01813203123");

    return 0;
}

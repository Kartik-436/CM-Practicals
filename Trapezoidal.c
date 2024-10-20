#include <stdio.h>

// Define the function to integrate (example: f(x) = x^2)
double function(double x) {
    return (x * x * x) - (4 * x) - (9);
}

// Function to calculate the integral using Trapezoidal Rule
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n;  // Width of each sub-interval
    double sum = (function(a) + function(b)) / 2.0;

    // Calculate the sum for the internal points
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += function(x);
    }

    return sum * h;  // Multiply by the width of each sub-interval
}

int main() {
    double a, b;
    int n;

    // Input: Limits of integration and number of intervals
    printf("Enter the lower limit (a): ");
    scanf("%lf", &a);
    printf("Enter the upper limit (b): ");
    scanf("%lf", &b);
    printf("Enter the number of intervals (n): ");
    scanf("%d", &n);

    // Calculate the integral
    double result = trapezoidalRule(a, b, n);

    // Output the result
    printf("The approximate value of the integral is: %.6f\n", result);

    return 0;
}

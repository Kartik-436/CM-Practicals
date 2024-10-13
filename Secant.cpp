#include <iostream>
#include <cmath>  // For fabs()

using namespace std;

// Define the function f(x) = x^3 - 2x - 5
double f(double x) {
    return pow(x, 3) - 2 * x - 5;
}

int main() {
    double x0, x1, x2, f0, f1, f2, e;
    int step = 1, N;

    // Input: Two initial guesses
    cout << "Enter two initial guesses: " << endl;
    cin >> x0 >> x1;

    // Input: Tolerable error
    cout << "Enter tolerable error: " << endl;
    cin >> e;

    // Input: Maximum iterations
    cout << "Enter maximum iterations: " << endl;
    cin >> N;

    // Perform the Secant method
    do {
        f0 = f(x0);  // Compute f(x0)
        f1 = f(x1);  // Compute f(x1)

        if (fabs(f1 - f0) < 1e-6) {  // Avoid division by zero or very small number
            cout << "Mathematical Error: Division by zero" << endl;
            return 0;  // Exit the program in case of error
        }

        // Secant method formula: x2 = (f1 * x0 - f0 * x1) / (f1 - f0)
        x2 = (f1 * x0 - f0 * x1) / (f1 - f0);
        f2 = f(x2);  // Compute f(x2)

        // Display current iteration details
        cout << "Iteration " << step << ": x2 = " << x2 << " and f(x2) = " << f2 << endl;

        // Update x0, x1 for the next iteration
        x0 = x1;
        x1 = x2;

        step += 1;

        // Check if maximum iterations exceeded
        if (step > N) {
            cout << "Not convergent within the maximum number of iterations." << endl;
            cout << "\nAngad Thakur IT-1 02713203123" << endl;
            return 0;
        }

    } while (fabs(f2) > e);  // Continue until f(x2) is within the tolerable error

    // Output the root
    cout << "Root is " << x2 << endl;
    cout<<"\nKartik Garg\nIT-1\n01813203123";

    return 0;
}

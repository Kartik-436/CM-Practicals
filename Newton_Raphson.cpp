#include <iostream>
#include <cmath>  // For sin(), cos(), and fabs()

using namespace std;

// Define the function f(x) = sin(x)
double f(double x) {
    return sin(x);
}

// Define its derivative g(x) = cos(x)
double g(double x) {
    return cos(x);
}

int main() {
    double x0, x1, f0, g0, e = 0.001;  // e is the tolerance for convergence
    int i = 1, N;  // i is the iteration counter, N is the maximum number of iterations

    // Input initial guess
    cout << "Enter initial guess: ";
    cin >> x0;

    // Input maximum number of iterations
    cout << "Enter maximum iterations: ";
    cin >> N;

    do {
        f0 = f(x0);  // Compute f(x0)
        g0 = g(x0);  // Compute g(x0)

        if (g0 == 0.0) {  // Check if the derivative is zero (to avoid division by zero)
            cout << "Mathematical error: g(x0) is zero." << endl;
            break;
        }

        // Newton-Raphson formula: x1 = x0 - f(x0) / g(x0)
        x1 = x0 - f0 / g0;

        cout << "Iteration " << i << ": Approximate root = " << x1 << endl;

        // Check for convergence
        if (fabs(x1 - x0) < e) {
            cout << "The root is: " << x1 << endl;
            break;
        }

        x0 = x1;  // Update x0 for the next iteration
        i++;

        if (i > N) {
            cout << "The method did not converge within the maximum number of iterations." << endl;
            break;
        }

    } while (true);  // Infinite loop that breaks on convergence or failure

    cout << "Program completed." << endl;
    cout<<"\nKartik Garg\nIT-1\n01813203123";
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

double function(double x)
{
    return x * x - 4;
}

void bisection(double a, double b, double tol, int max_iter)
{
    double c;
    int iter = 0;
    while (fabs(b - a) > tol && iter < max_iter)
    {
        c = (a + b) / 2.0;
        cout << "Iteration " << iter + 1 << ": a = " << a << ", b = " << b << ", c = " << c << ", f(c) = " << function(c) << endl;

        if (function(c) == 0.0)
        {
            cout << "Root found at x = " << c << endl;
            return;
        }

        if (function(a) * function(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        iter++;
    }

    c = (a + b) / 2.0;
    cout << "Root approximately at x = " << c << endl;
    cout << "Number of iterations: " << iter << endl;
}

int main()
{
    double a, b, tol;
    int max_iter;

    cout << "Enter the initial interval [a, b]: ";
    cin >> a >> b;
    cout << "Enter the tolerance (e.g., 0.0001): ";
    cin >> tol;
    cout << "Enter the maximum number of iterations: ";
    cin >> max_iter;

    bisection(a, b, tol, max_iter);

    cout<<"\nKartik Garg\nIT-1\n01813203123";

    return 0;
}

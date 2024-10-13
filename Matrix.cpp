#include <iostream> 
using namespace std; 

int main() {
    int r1, c1, r2, c2; 
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Correct condition to check
    if (c1 != r2) {
        cout << "Error! The number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return -1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix: " << endl; 
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix: " << endl;
    for (int i = 0; i < r2; ++i) { 
        for (int j = 0; j < c2; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix to 0
    for (int i = 0; i < r1; ++i) { 
        for (int j = 0; j < c2; ++j) { 
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; ++i) { 
        for (int j = 0; j < c2; ++j) { 
            for (int k = 0; k < c1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output first matrix
    cout << "First matrix: " << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Output second matrix
    cout << "Second matrix: " << endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Output the result matrix
    cout << "Resultant Matrix: " << endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\nKartik Garg\nIT-1\n01813203123";

    return 0;
}

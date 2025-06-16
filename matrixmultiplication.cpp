#include <iostream>
using namespace std;

int main() {
    int A[10][10], B[10][10], result[10][10];
    int m, n, p, q;

    cout << "Enter number of rows and columns for Matrix A (m*n): ";
    cin >> m >> n;

    cout << "Enter number of rows and columns for Matrix B (p*q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Matrix multiplication not possible! (Columns of A must match Rows of B)\n";
        return 1;
    }

    // Input elements for Matrix A
    cout << "Enter elements of Matrix A (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements for Matrix B
    cout << "Enter elements of Matrix B (" << p << "x" << q << "):\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    cout << "\nResult of Matrix Multiplication (A x B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
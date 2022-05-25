// Include header file
#include <iostream>

using namespace std;

/*
  C++ program for
  Magic Squares of Even Order
*/
class Square {
public:
    // Find magic square of Even Order
    void magicSquare(int n) {
        if (n > 0 && n % 2 == 0) {
            // Use to collect result
            int matrix[n][n];
            // Some auxiliary variable
            int k = n / 2;
            int row = 0;
            int col = k / 2;
            if ((n / 2) % 2 != 0) {
                // When n is Even and its divisible by 2 reminder is not zero
                // 6,10,14,18,22,26..(4*n +2)
                // Exmple (6/2 = 3) and its reminder not zero
                // Execute loop (n/2)*2 times.
                for (int value = 1; value <= k * k; ++value) {
                    // Add element in top left grid
                    matrix[row][col] = value;
                    // Add element in bottom right grid
                    matrix[k + row][k + col] = value + (k * k);
                    // Add element in top right grid
                    matrix[row][k + col] = value + (k * k * 2);
                    // Add element in bottom left grid
                    matrix[k + row][col] = value + (k * k * 3);
                    col += 1;
                    row -= 1;
                    if (value % k == 0) {
                        col -= 1;
                        row += 2;
                    } else {
                        if (col == k) {
                            col = 0;
                        } else if (row < 0) {
                            row += k;
                        }
                    }
                }
            } else {
                // Doubly Even order magic square of n
                // (4*n)
                for (row = 0; row < n; row++) {
                    for (col = 0; col < n; col++) {
                        matrix[row][col] = (n * row) + col + 1;
                    }
                }
                for (row = 0; row < n / 4; row++) {
                    for (col = 0; col < n / 4; col++) {
                        // Top Left corner
                        matrix[row][col] = (n * n + 1) - matrix[row][col];
                    }
                }
                for (row = 0; row < n / 4; row++) {
                    for (col = 3 * (n / 4); col < n; col++) {
                        // Top right corner
                        matrix[row][col] = (n * n + 1) - matrix[row][col];
                    }
                }
                for (row = 3 * n / 4; row < n; row++) {
                    for (col = 0; col < n / 4; col++) {
                        // Bottom Left corner
                        matrix[row][col] = (n * n + 1) - matrix[row][col];
                    }
                }
                for (row = 3 * n / 4; row < n; row++) {
                    for (col = 3 * n / 4; col < n; col++) {
                        // Bottom right corner
                        matrix[row][col] = (n * n + 1) - matrix[row][col];
                    }
                }
                for (row = n / 4; row < 3 * n / 4; row++) {
                    for (col = n / 4; col < 3 * n / 4; col++) {
                        // Centre elements
                        matrix[row][col] = (n * n + 1) - matrix[row][col];
                    }
                }
            }
            // Display given size
            // cout << "\n  Magic square of size (" << n
            //      << "X" << n << ")" << endl;
            // Display result
            for (row = 0; row < n; ++row) {
                for (col = 0; col < n; ++col) {
                    cout << "  " << matrix[row][col];
                }
                cout << endl;
            }
            k = (n * (n * n + 1) / 2);
            // cout << "  Sum of each rows and columns is " << k << endl;
//           int sumtest = 0;
//           for(int i=0;i<n;i++)
//           {
//               sumtest += matrix[i][i];
//           }
//           cout << sumtest;
        }
    }
};

int main() {
    Square *task = new Square();
    int n;
    cin >> n;
    // Test
    task->magicSquare(n);

    //cout << endl << "test";

    return 0;
}
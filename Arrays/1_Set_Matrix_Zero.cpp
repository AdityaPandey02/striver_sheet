
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

    int col0 = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark i-th row:
                matrix[i][0] = 0;

                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }


    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 0}, {1, 2, 6}, {3, 4, 5}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n"<<endl;
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        // Input matrix elements
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Output stabilized matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i == j && i + 1 < n && j + 1 < m && matrix[i][j] > matrix[i + 1][j + 1]) {
                    cout << matrix[i + 1][j] << " ";
                } else if (i == j && i - 1 >= 0 && matrix[i][j] > matrix[i - 1][j]) {
                    cout << matrix[i - 1][j] << " ";
                } else {
                    cout << matrix[i][j] << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}



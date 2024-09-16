#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        vector<int> position(n, 0);

        for (int i = 1; i < n; i++) {
            if (vec[i] != vec[i - 1]) {
                int k = i - 1;
                while (position[k] == 0) {
                    position[k] = i + 1;
                    k--;
                }
            }
        }

        position[n - 1] = -1;

        int q;
        cin >> q;

        while (q--) {
            int left, right;
            cin >> left >> right;

            if (position[left - 1] <= right && position[left - 1] != 0) {
                cout << left << " " << position[left - 1] << endl;
            } else {
                cout << -1 << " " << -1 << endl;
            }
        }

        cout << endl;
    }

    return 0;
}

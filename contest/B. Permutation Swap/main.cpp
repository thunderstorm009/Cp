#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int k = 0;
        for (int i = 0; i < n; i++) {
            int p = abs(arr[i] - (i + 1));
            if (p != 0) {
                k = __gcd(k, p);
            }
        }

        cout << k << endl;
    }
    return 0;
}

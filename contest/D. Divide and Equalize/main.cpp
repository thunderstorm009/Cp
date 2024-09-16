#include <bits/stdc++.h>

using namespace std;
void factor(int n, map<int, int>& Factor) {
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            n /= i;
            Factor[i]++;
        }
    }
    if (n > 1) Factor[n]++;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> Factor; // Local map for each test case

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            factor(arr[i], Factor);
        }

        bool ok = true;
        for (const auto& it : Factor) {
            if (it.second % n != 0) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

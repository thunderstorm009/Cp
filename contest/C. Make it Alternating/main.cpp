#include <bits/stdc++.h>

using namespace std;

#define int long long
#define MOD 998244353

int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1) % MOD;
}

int32_t main() {
    int tt;
    cin >> tt;
    while (tt--) {
        string str;
        cin >> str;
        int min_op = 0, diff = 1;
        int cnt = 1;

        for (int i = 0; i < str.size(); i++) {
            if (i < str.size() - 1 && str[i] == str[i + 1]) {
                cnt = (cnt + 1) % MOD;
            } else {
                min_op = (min_op + cnt - 1) % MOD;
                diff = (diff * cnt) % MOD;
                cnt = 1;
            }
        }
        cout << min_op % MOD << " ";
        cout << (diff * fact(min_op)) % MOD << endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}

bool check(int mid, int k, long long x) {
    if (mid >= k) {
        return (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
    } else {
        return (get(mid) >= x);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        long long x;
        cin >> k >> x;
        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;

        while (l <= r) {
            int mid = (l + r) >> 1;
            if (check(mid, k, x)) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}


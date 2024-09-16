#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long ans = 0;
        map<pair<int, int>, int> calc;
        for (int i = 0; i < n; i++) {
            long long modx = (x - (arr[i] % x)) % x;
            long long mody = arr[i] % y;
            ans += calc[{modx, mody}];
            calc[{arr[i] % x, arr[i] % y}]++;
        }
        cout << ans << endl;
    }
    return 0;
}

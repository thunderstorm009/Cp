#include <bits/stdc++.h>

using namespace std;

bool check(const vector<pair<int, int>>& result, int k) {
    int ll = 0, rr = 0;
    for (const auto &eg : result) {
        ll = max(ll - k, eg.first);
        rr = min(rr + k, eg.second);
        if (ll > rr) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i].first >> arr[i].second;
        }

        int l = -1, r = 1e9;
        while (r - l > 1) {
            int mid = (r + l) / 2;
            if (check(arr, mid)) {
                r = mid;
            } else {
                l = mid;
            }
        }
        cout << r << endl;
    }
    return 0;
}

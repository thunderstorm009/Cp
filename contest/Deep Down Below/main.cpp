#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool canCompleteTrips(ll mid, const vector<pair<ll, int>>& power, int n) {
    ll curr = mid;
    for(int i = 0; i < n; i++) {
        if(curr >= power[i].first) {
            curr += power[i].second;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<ll, int>> power(n);

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vector<ll> p(x);
            ll mxp = -1;

            for(int j = 0; j < x; j++) {
                cin >> p[j];
                mxp = max(mxp, p[j] - j + 1);
            }
            power[i] = {mxp, x};
        }

        sort(power.begin(), power.end());

        ll l = power[0].first, r = power[n-1].first;
        ll ans = 1e12;

        while(l <= r) {
            ll mid = (l + r) / 2;
            if(canCompleteTrips(mid, power, n)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}


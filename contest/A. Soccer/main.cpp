#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
    ll x, y, k;
    cin >> x >> y >> k;

    ll ans;
    bool ok = false;

    while (x != 1) {
        ll needed = ((x / y) + 1) * y - x;

        if (k < needed) {
            ans = k + x;
            ok = true;
            break;
        }

        k -= needed;
        x += needed;

        while (x % y == 0) {
            x /= y;
        }
    }

    y--;

    if (!ok) {
        ans = 1 + k % y;
    }

    cout << ans << endl;
    }
    return 0;
}

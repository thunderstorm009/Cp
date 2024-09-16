#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int n;
long long m;
long long tres[N];

bool check(int h) {
    long long wood = 0;
    for (int i = 0; i < n; i++) {
        if (tres[i] >= h) {
            wood += tres[i] - h;
        }
    }
    return wood >= m;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    cin >> n ;
    for (int i = 0; i < n; i++) {
        cin >> tres[i];
    }

    long long lo = 0, hi = 1e9, mid;
    while (hi - lo > 1) {
        mid = (lo + hi) / 2;
        if (check(mid)) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }

    if (check(hi)) {
        cout << hi << endl;
    } else {
        cout << lo << endl;
    }

    return 0;
}

}

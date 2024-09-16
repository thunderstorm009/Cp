#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int n;
long long cows;
long long position[N];

bool check(int mindis) {
    int las_pos = -1;
    int cows_ct = cows;
    for(int i = 0; i < n; i++) {
        if(position[i] - las_pos >= mindis || las_pos == -1) {
            cows_ct--;
            las_pos = position[i];
        }
        if(cows_ct == 0) break;
    }
    return cows_ct == 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> cows;
        for(int i = 0; i < n; i++) {
            cin >> position[i];
        }
        sort(position, position + n);
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
    }
    return 0;
}

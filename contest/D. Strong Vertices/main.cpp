#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> c;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++) {
            c.push_back(a[i] - b[i]);
        }

        int max0 = *max_element(c.begin(), c.end());
        int ct = 0;
        for(int i = 0; i < n; i++) {
            if(c[i] == max0) ct++;
        }
        cout << ct << endl;

        for(int i = 0; i < n; i++) {
            if(a[i] - b[i] == max0) cout << i + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}

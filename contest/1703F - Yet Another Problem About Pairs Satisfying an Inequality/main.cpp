#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long res = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= i) {continue;}
        res += (long long)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
        v.push_back(i);
    }
    cout << res << '\n';
}



}

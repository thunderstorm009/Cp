#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin>>n;
        string s;
        cin >> s;
        int count = 1, ans = 1;
            for (int i = 1; i < n; i ++) {
                if (s[i-1] != s[i]) {
                    count=1;
                }else{
                    count++;
                }
                ans = max(ans, count);
            }
            cout << ans+1<< endl;
        }

}




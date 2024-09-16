#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<long long> vec(n);
        set<long long> st;
        st.insert(0);
        long long sum = 0;
        bool ok = false;

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            if(i % 2 == 0) vec[i] *= -1;
            sum += vec[i];
            if(st.find(sum) != st.end()) ok = true;
            st.insert(sum);
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

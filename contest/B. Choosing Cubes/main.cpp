#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int fav_value = arr[f - 1];
        sort(arr.begin(), arr.end(), greater<int>());

        int count_fav_value_above_k = 0;
        for (int i = 0; i < k; i++) {
            if (arr[i] == fav_value) {
                count_fav_value_above_k++;
            }
        }

        int count_fav_value_total = count(arr.begin(), arr.end(), fav_value);

        if (count_fav_value_above_k == count_fav_value_total) {
            cout << "YES" << endl;
        } else if (count_fav_value_above_k == 0) {
            cout << "NO" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}

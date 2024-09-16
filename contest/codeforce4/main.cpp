#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Fast input
    cin.tie(0); // Fast output

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<long long> prefixSum(n);
        prefixSum[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }

        int count = 0;

        unordered_set<int> seenElements;
        for (int i = 0; i < n; ++i) {
            if (2 * arr[i] == prefixSum[i]) {
                count++;
            }
            seenElements.insert(arr[i]);
        }

        cout << count << endl;
    }

    return 0;
}


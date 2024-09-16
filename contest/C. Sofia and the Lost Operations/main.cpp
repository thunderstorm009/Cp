#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        vector<int> arr(n);
        vector<int> arr2(n);
        map<int, int> freqA;
        map<int, int> freqB;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freqA[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
            freqB[arr2[i]]++;
        }

        cin >> m;
        vector<int> arr3(m);
        map<int, int> freqD;

        for (int i = 0; i < m; i++) {
            cin >> arr3[i];
            freqD[arr3[i]]++;
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr2[i]) {
                if (freqD[arr2[i]] > 0) {
                    freqD[arr2[i]]--;
                } else {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n), arr2(n), arr3(n);
        vector<pair<int, int>> shei, shei2, shei3;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            shei.push_back({arr[i], i});
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
            shei2.push_back({arr2[i], i});
        }
        for (int i = 0; i < n; i++) {
            cin >> arr3[i];
            shei3.push_back({arr3[i], i});
        }

        sort(shei.begin(), shei.end(), greater<>());
        sort(shei2.begin(), shei2.end(), greater<>());
        sort(shei3.begin(), shei3.end(), greater<>());

        int ans = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (shei[i].second != shei2[j].second && shei[i].second != shei3[k].second && shei2[j].second != shei3[k].second) {
                        ans = max(ans, shei[i].first + shei2[j].first + shei3[k].first);
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

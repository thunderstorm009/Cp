#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> arr2(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
        }

        int r = k - n; // Number of additional completions possible beyond the first n quests
        int count = 0;
        int q = k;
        count += arr[0]; // Initial completion of the first quest
        int i = 0, j = 0;


        while (q > n) {
            if (k == q) continue;
            if (j < n && i + 1 < n && arr[j] > arr[i + 1]) {
                count += arr[j];
                i++;
            } else if (i < n && arr[i] > arr[j]) {
                count += arr[i];
                j++;
            } else {
                if (i < n) {
                    count += arr[i];
                    i++;
                }
                if (j < n) {
                    j++;
                }
            }
            q--;
        }


        while (r--) {
            count += *max_element(arr2.begin(), arr2.end());
        }

        cout << count << endl;
    }
    return 0;
}

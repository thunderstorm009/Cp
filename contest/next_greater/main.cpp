#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int i = 0, j = n - 1;
        long long sum1 = arr[i]; // Use long long to avoid overflow
        long long sum2 = arr[j];
        int idx = -1; // Initialize idx to -1, indicating no such position found

        while (i < j) {
            if (sum1 < sum2) {
                i++;
                sum1 *= arr[i];
            } else if (sum1 > sum2) {
                j--;
                sum2 *= arr[j];
            } else { // If sum1 == sum2, we have found the position
                idx = i + 1; // Position is 1-indexed
                break;
            }
        }

        if (idx != -1) {
            cout << idx << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

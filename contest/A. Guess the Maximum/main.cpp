#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> arra;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arra[arr[i]]++;
        }
        int min_elem = *min_element(arr.begin(), arr.end());
        if (arra.size() == 1) {
            cout << arr[0] - 1 << endl;
        } else {
            cout <<min_elem << endl;
        }
    }
    return 0;
}

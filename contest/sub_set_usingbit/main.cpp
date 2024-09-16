#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> all_subsets;
    int n = nums.size();
    int subset_ct = (1 << n);

    for(int mask = 0; mask < subset_ct; ++mask) {
        vector<int> subset;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }
        all_subsets.push_back(subset);
    }
    return all_subsets;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> result = subsets(arr);

    for(const auto& subset : result) {
        for(int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}


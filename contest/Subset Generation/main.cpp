#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int>& subset, int i, vector<int>& nums) {
    if (i == nums.size()) {
        subsets.push_back(subset);
        return;
    }

    // Exclude nums[i]
    generate(subset, i + 1, nums);

    // Include nums[i]
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);

    // Backtrack to remove the last added element
    subset.pop_back();
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> subset;
    generate(subset, 0, nums);

    cout << "The subsets are: " << endl;
    for (const auto& s : subsets) {
        cout << "{ ";
        for (int num : s) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

void findNumber(vector<int>& ar, int sum, vector<vector<int>>& res, vector<int>& r, int i) {
    if (sum == 0) {
        res.push_back(r);
        return;
    }
    while (i < ar.size() && sum - ar[i] >= 0) {
        r.push_back(ar[i]);
        findNumber(ar, sum - ar[i], res, r, i);
        i++;
        r.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& ar, int sum) {
    sort(ar.begin(), ar.end());
    ar.erase(unique(ar.begin(), ar.end()), ar.end());
    vector<int> r;
    vector<vector<int>> res;
    findNumber(ar, sum, res, r, 0);
    return res;
}

int main() {
    int n, sum;
    cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cin >> sum;

    vector<vector<int>> res = combinationSum(ar, sum);

    for (const auto& combination : res) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 300001;
int a[MAXN], cnt[MAXN], pos[MAXN];
bool vis[MAXN];
vector<int> test[MAXN];

void solve() {
    int n, pt = 1e9;
    cin >> n;

    // Initialize arrays and vectors
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        pos[i] = -1;
        cnt[i] = 0;
        vis[i] = false;
        test[i].clear();
    }

    // Fill pos and test arrays
    for (int i = 1; i <= n; ++i) {
        pos[a[i]] = i;
        test[a[i]].push_back(i);
    }

    // Update cnt and find the initial min position pt
    for (int i = 1; i <= n; ++i) {
        if (pos[i] != -1) {
            cnt[pos[i]]++;
            pt = min(pt, pos[i]);
        }
    }

    vector<int> res;
    for (int i = 1; i <= n;) {
        if (i == pt) {
            res.push_back(a[i]);
            cnt[pos[a[i]]]--;
            while (pt <= n && cnt[pt] == 0) pt++;
            i++;
        } else {
            int target = (res.size() % 2 == 0) ? 0 : 1e9;
            int next_i = i;
            for (int j = i; j <= min(pt, n); ++j) {
                if (!vis[j]) {
                    if (res.size() % 2 == 0) {
                        if (a[j] > target) {
                            target = a[j];
                            next_i = j + 1;
                        }
                    } else {
                        if (a[j] < target) {
                            target = a[j];
                            next_i = j + 1;
                        }
                    }
                }
            }

            if ((res.size() % 2 == 0 && target == 0) || (res.size() % 2 != 0 && target == 1e9)) {
                break;
            }

            res.push_back(target);
            cnt[pos[target]]--;
            while (pt <= n && cnt[pt] == 0) pt++;
            i = next_i;
        }

        // Mark all positions in test[res.back()] as visited
        for (int idx : test[res.back()]) {
            vis[idx] = true;
        }
    }

    // Output the result
    cout << res.size() << endl;
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}

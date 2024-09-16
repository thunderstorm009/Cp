#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<map<array<int, 2>, vector<int>>> mp(3);
        for (int i = 0; i < n - 2; i++)
        {
            mp[0][{arr[i], arr[i + 1]}].push_back(arr[i + 2]);
            mp[1][{arr[i], arr[i + 2]}].push_back(arr[i + 1]);
            mp[2][{arr[i + 1], arr[i + 2]}].push_back(arr[i]);
        }
        long long ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (auto &[key, v] : mp[i])
            {
                long long count = 0;
                map<int, int> count2;
                int m = v.size();
                for (int j : v)
                    count2[j]++;
                for (int j : v)
                {
                    count += (m - count2[j]);
                }
                ans += count / 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days(n, 0);

    for(int i = 0; i < n; i++){
        int num_ofdays;
        cin >> num_ofdays;
        int masks = 0;
        for(int j = 0; j < num_ofdays; j++){
            int day;
            cin >> day;
            masks |= (1 << day);
        }
        days[i] = masks;
    }

    int maxdays = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int intersection = days[i] & days[j];
            int common_days = __builtin_popcount(intersection);
            maxdays = max(maxdays, common_days);
        }
    }

    cout << maxdays << endl;

    return 0;
}

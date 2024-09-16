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
        string a;
        cin >> a;

        unordered_map<char, int> calc;

        for (int i = 0; i < n; i++)
        {
            calc[a[i]]++;
        }

        pair<int, int> toachieve;
        toachieve.first = (calc['N'] - calc['S']) / 2;
        toachieve.second = (calc['E'] - calc['W']) / 2;

        int countx1 = 0, countx2 = 0, county1 = 0, county2 = 0;

        if ((abs(calc['N'] - calc['S']) % 2 != 0) || (abs(calc['E'] - calc['W']) % 2 != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < n;)
            {
                if (toachieve.first != countx1 || toachieve.second != county1)
                {
                    if (a[i] == 'N')
                    {
                        countx1++;
                        cout << "H";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'S')
                    {
                        countx1--;
                        cout << "H";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'E')
                    {
                        county1++;
                        cout << "H";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'W')
                    {
                        county1--;
                        cout << "H";
                        i++;
                        continue;
                    }
                }
                if (toachieve.first != countx2 || toachieve.second != county2)
                {
                    if (a[i] == 'N')
                    {
                        countx2++;
                        cout << "R";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'S')
                    {
                        countx2--;
                        cout << "R";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'E')
                    {
                        county2++;
                        cout << "R";
                        i++;
                        continue;
                    }
                    else if (a[i] == 'W')
                    {
                        county2--;
                        cout << "R";
                        i++;
                        continue;
                    }
                }
            }
            cout << "\n";
        }
    }
    return 0;
}

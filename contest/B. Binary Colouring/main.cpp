#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        cout << "6" << endl;
        int number = 32 - x;
        string binary = bitset<32>(number).to_string();
        for (int i = binary.size() - 1; i >= binary.size() - 6; --i) {
            if (binary[i] == '1')
                cout << "-";
            cout << binary[i] << " ";
        }
        cout << "1" << endl;
    }

    return 0;
}

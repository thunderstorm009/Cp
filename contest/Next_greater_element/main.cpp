#include <bits/stdc++.h>

using namespace std;

vector<int> NGE(vector<int>& arr) {
    vector<int> nge(arr.size());
    stack<int> st;

    for (int i = 0; i < arr.size(); i++) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }

    return nge;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> nge = NGE(arr);

    for (int i = 0; i < n; i++) {
        if (nge[i] == -1) {
            cout << arr[i] << " -> -1" << endl;
        } else {
            cout << arr[i] << " -> " << arr[nge[i]] << endl;
        }
    }

    return 0;
}

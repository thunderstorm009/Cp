#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int> symbol = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

string balenxed(string a) {
    stack<char> st;
    for(char bracket : a) {
        if(symbol[bracket] < 0) {
            st.push(bracket);
        } else {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbol[top] + symbol[bracket] != 0) {
                return "NO";
            }
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main() {
    string a;
    cin >> a;
    cout << balenxed(a) << endl;
    return 0;
}

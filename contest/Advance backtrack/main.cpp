#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generat(string &s, int open, int closing) {
    if (open == 0 && closing == 0) {
        valid.push_back(s);
        return;
    }

    if (open > 0) {
        s.push_back('(');
        generat(s, open - 1, closing);
        s.pop_back();
    }

    if (closing > 0) {
        if (open < closing) {
            s.push_back(')');
            generat(s, open, closing - 1);
            s.pop_back();
        }
    }
}

int main() {
    int n = 3;
    string s;
    generat(s, n, n);

    for (const auto &str : valid) {
        cout << str << endl;
    }

    return 0;
}

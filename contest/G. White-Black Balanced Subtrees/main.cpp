#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll INFINITY_VALUE = 1e18;
const ll MODULUS1 = 1000000007;
const ll MODULUS2 = 998244353;

ll numberOfNodes;
ll resultCount;
string colors;
vector<ll> parentNodes;
vector<bool> visitedNodes;
vector<vector<ll>> adjacencyList;

pair<ll, ll> depthFirstSearch(ll currentNode) {
    if (visitedNodes[currentNode]) {
        return {0, 0};
    }
    visitedNodes[currentNode] = true;
    ll blackCount = 0, whiteCount = 0;

    if (colors[currentNode - 1] == 'B') {
        blackCount++;
    } else {
        whiteCount++;
    }

    for (ll i = 0; i < adjacencyList[currentNode].size(); i++) {
        if (!visitedNodes[adjacencyList[currentNode][i]]) {
            pair<ll, ll> tempResult = depthFirstSearch(adjacencyList[currentNode][i]);
            blackCount += tempResult.first;
            whiteCount += tempResult.second;
        }
    }

    if (blackCount == whiteCount) {
        resultCount++;
    }

    return {blackCount, whiteCount};
}

ll solve() {
    cin >> numberOfNodes;
    parentNodes.resize(numberOfNodes + 1, 0);
    adjacencyList.resize(numberOfNodes + 1);
    visitedNodes.resize(numberOfNodes + 1, false);

    for (ll i = 2; i <= numberOfNodes; i++) {
        cin >> parentNodes[i];
        adjacencyList[parentNodes[i]].push_back(i);
        adjacencyList[i].push_back(parentNodes[i]);
    }

    cin >> colors;

    resultCount = 0;
    depthFirstSearch(1);

    cout << resultCount << endl;

    colors.clear();
    resultCount = 0;
    numberOfNodes = 0;
    adjacencyList.clear();
    parentNodes.clear();
    visitedNodes.clear();
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll numberOfTestCases = 1;
    cin >> numberOfTestCases;
    while (numberOfTestCases--) {
        solve();
    }

    return 0;
}

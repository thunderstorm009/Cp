#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& v, int element) {
    int lo = 0, hi = v.size() - 1;
    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] < element) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if (v[lo] >= element) {
        return lo;
    } else if (v[hi] >= element) {
        return hi;
    } else {
        return -1; // Element is greater than all elements in the vector
    }
}

int upperBound(vector<int>& v, int element) {
    int lo = 0, hi = v.size() - 1;
    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2;
        if (v[mid] <= element) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if (v[lo] > element) {
        return lo;
    } else if (v[hi] > element) {
        return hi;
    } else {
        return -1; // Element is greater than or equal to all elements in the vector
    }
}

int main() {
    int n, element;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the vector in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << "Enter the element to find lower and upper bounds: ";
    cin >> element;

    int lb = lowerBound(v, element);
    int ub = upperBound(v, element);

    if (lb != -1) {
        cout << "Lower bound of " << element << " is at index: " << lb << endl;
    } else {
        cout << "Lower bound not found!" << endl;
    }

    if (ub != -1) {
        cout << "Upper bound of " << element << " is at index: " << ub << endl;
    } else {
        cout << "Upper bound not found!" << endl;
    }

    return 0;
}


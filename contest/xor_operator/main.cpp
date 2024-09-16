#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    a= a^b;
    b= b^a;
    a = a^b;
    int n;
    cin>>n;
    int ans = 0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans^=arr[i];
    }

}

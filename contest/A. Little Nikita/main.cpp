#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(n<m){
            cout<<"No"<<endl;
            continue;
        }
        int ans = n-m;
        if(ans%2==0){
            cout<<"Yes\n";
        }else{
            cout<<"No<<endl;
        }

    }
}

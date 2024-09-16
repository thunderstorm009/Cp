#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll countZeroes(ll n){
    ll p = 0;
    while(n > 0){
        if(n % 10 != 0) break;
        p++;
        n /= 10;
    }
    return p;
}

ll countDigits(ll n){
    ll o = 0;
    while(n > 0){
        o++;
        n /= 10;
    }
    return o;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
            ll n, m;
    cin >> n >> m;
    vll v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    ll sum = 0;
    vll z(n);
    for(int i = 0; i < n; i++){
        sum += countDigits(v[i]);
        z[i] = countZeroes(v[i]);
    }

    sort(z.begin(), z.end(), greater<ll>());
    for(int i = 0; i < n; i += 2){
        sum -= z[i];
    }

    if(sum >= (m + 1)){
        cout << "Sasha\n";
    }
    else{
        cout << "Anna\n";
    }
}

    }
    return 0;
}


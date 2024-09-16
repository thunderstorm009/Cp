#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a[n];
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a[i].resize(k);
            for(int j=0;j<a[i].size();j++){
                cin>>a[i][j];
            }
        }
        map<int,int> isSet;
        for(int i=0;i<n;i++){
            for(int j=0;j<a[i].size();j++){
                isSet[a[i][j]]++;
            }
        }
        bool possible=false;
        for(int i=0;i<n;i++){
            bool ok=true;
            for(int j=0;j<a[i].size();j++){
                if(isSet[a[i][j]]>1)continue;
                ok=false;
                break;
            }
            if(ok){
                possible=true;
                break;
            }
        }
        if(possible){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

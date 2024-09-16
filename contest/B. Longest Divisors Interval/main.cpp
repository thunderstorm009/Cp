#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a;
        cin>>a;
        int ans;
        for(int i=1; ; i++){
            if(a%i!=0){
                ans = i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

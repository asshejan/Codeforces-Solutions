#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll "long long"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        vector<ll> a(n);
        for(auto i=0;i<n; i++){
            cin>>a[i];
        }
        for(auto i=0;i<n;i++){
            cout<<a[i]<< en;
        }
    }
    
    return 0;
}
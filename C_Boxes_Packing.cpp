#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    map<ll, ll> m;

    for(ll num: v){
        m[num]++;
    }
    ll max = 0;
    for(auto it=m.begin(); it != m.end(); it++){
        if(it->second>max){
            max = it->second;
        }
    }
    cout<<max<<en;
    



    
    return 0;
}
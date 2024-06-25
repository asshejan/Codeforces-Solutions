#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

ll countpairs(ll n, vector<ll>& a){

    unordered_map<ll, ll> freq;
    ll pairs = 0;
    for(ll i=1;i<= n;i++){
        ll dif = a[i] - i ;
         pairs += freq[dif];
        freq[dif]++;
    }
    return pairs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>> t;

    while(t--){
        ll n;
        cin>> n;
        vector<ll> a(n+1);

        for(int i=1;i<=n;i++){
            cin>> a[i];
        }

        cout<< countpairs(n, a) << en;
    }
    
    return 0;
}
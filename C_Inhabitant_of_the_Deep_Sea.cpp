#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>> t;

    while (t--)             
    {
        ll n, k;
        cin>> n>> k;
         
        vector<ll> v(n);
        ll sum = 0;

        for(ll i=0;i<n;i++){
            cin>>v[i];
            sum += v[i];
        }
        if(sum >= k){
            // cout<< n << en;
        }
        auto mn = *min_element(v.begin(), v.end());

        if(mn >= k){
            // cout<<0<<en;
        }
        for (ll i = 0; i < n; i++)
        {
            k -= (v[0] + v[n-1]);
            if(k < 1 && )
            
        }
        
    }
    
    
    return 0;
}
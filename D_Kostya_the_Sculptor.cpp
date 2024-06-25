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
    cin>> n;
    
    ll max = 0, idx, cnt = 0;
    for(ll i=0;i<n;i++){
        ll a, b, c;
        cin>>a>>b>>c;
        ll mini = min({a, b, c});
        // cout<<mini<<en;
        if(mini>max){
            max = mini;
            idx = i;
        }
    }
    cout<<cnt<<en;
    cout<<idx+1<<en;

    
    return 0;
}
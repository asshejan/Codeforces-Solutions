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

    unordered_set<ll> stringSet;

    for(ll i=1; i<n; i++){
        int x;
        cin>> x;
        stringSet.insert(x);
    }
    for(ll i=1; i<=n; i++){
        if (stringSet.find(i) == stringSet.end())
        cout << i << en;
    }
   
    return 0;
}
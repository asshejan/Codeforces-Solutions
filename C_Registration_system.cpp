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
    cin >> n;

    map<string, ll> m;

    for (ll i = 0; i < n; i++)
    {
        string s;
        cin>> s;
        if (m[s] == 0){
            m[s] = 1;
            cout<<"OK"<<en;
        }else{
            cout<<s<<m[s]<<en;
            m[s]++;
        }
    }

    return 0;
}
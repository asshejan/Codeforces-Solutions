/**
*   Author : As_Shejan
*   Created: 2024-04-24 05:01:26
**/
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<ll>
#define pi pair<ll, ll>
#define f first
#define sc second
#define all(x) x.begin(), x.end()
#define en   '\n'
#define YES cout << "YES" << en
#define NO cout << "NO" << en
#define yes cout << "Yes" << en
#define no cout << "No" << en
#define fill_number(x, n) setfill('0') << setw(n) << (x)
#define precision_number(x, n) fixed << setprecision(n) << (x)
template <typename T>
T lcm(T a, T b)
{
    return (a * (b / __gcd(a, b)));
}

typedef long long  ll;
typedef unsigned long long ull;
typedef long double lld;



int32_t main()
{
    FastIO;

    ll t;
    cin>> t;

    while (t--)
    {
        ll n;
        cin>> n;
        ll ml = 0;
        ll cl = 0;

        for(ll i=0;i<n;i++){ 
            ll x;
            cin>>x;
            if(x == 0){
                cl++;
            }else{
                ml = max(ml, cl);
                cl = 0;
            }
        }
        ml = max(ml, cl);
        cout<<ml<<en;
    }
    

    return 0;
}

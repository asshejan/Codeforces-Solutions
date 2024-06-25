/**
 *   Author : As_Shejan
 *   Created: 2024-05-16 16:13:35
 **/
#include <bits/stdc++.h>
using namespace std;

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vi vector<ll>
#define pi pair<ll, ll>
#define f first
#define sc second
#define all(x) x.begin(), x.end()
#define en '\n'
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

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

int32_t main()
{
    FastIO;

    ll n, k;
    cin >> n >> k;

    vi a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;

        ll l = 0;
        ll r = n-1;
        ll f = 0;

        while(l <= r){

            ll mid = l + (r-l)/2;

            if(a[mid] == x){
                f = 1;
                break;
            }else if(x < a[mid]){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }

        if(f) YES;
        else NO;
    }

    return 0;
}

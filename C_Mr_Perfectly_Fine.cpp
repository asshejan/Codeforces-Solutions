/**
 *   Author : As_Shejan
 *   Created: 2024-04-24 05:48:14
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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll x11 = INT_MAX, x01 = INT_MAX, x10 = INT_MAX, ans = INT_MAX;

        for (ll i = 0; i < n; i++)
        {
            ll m;
            string s;
            cin >> m >> s;
 
            if (s == "11")
                x11 = min(x11, m);
            if (s == "01")
                x01 = min(x01, m);
            if (s == "10")
                x10 = min(x10, m);
        }
        ans = min(x11, x01 + x10);

        if (ans == INT_MAX)
            ans = -1;

        cout << ans << en;
    }

    return 0;
}

/**
 *   Author : As_Shejan
 *   Created: 2024-05-02 10:04:15
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
        ll n, x;
        cin >> n >> x;

        vi a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll mx = INT_MIN;
        for(ll i=0;i<n-1;i++){
            mx = max(mx, a[i+1] - a[i]);
        }
        mx = max(mx, a[0] - 0);
        mx = max(mx, 2*(x - a[n-1]));

        cout<<mx<<en;
    }

    return 0; 
}
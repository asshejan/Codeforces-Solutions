/**
 *   Author : As_Shejan
 *   Created: 2024-05-02 08:54:05
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

        vi a(n);

        set<ll> divisible;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisible.insert(i);
            }
        }
        
    }

    return 0;
}

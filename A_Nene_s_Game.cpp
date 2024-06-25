/**
 *   Author : As_Shejan
 *   Created: 2024-04-26 07:21:09
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

        int k, q, mn = INT_MAX;
        cin >> k >> q;

        ll x[k];

        for (int i = 0; i < k; i++)
        {

            cin >> x[i];
        }

        for (int i = 0; i < q; i++)
        {
            int n;
            cin >> n;
            if (n >= x[0])
            {
                cout << x[0] - 1 << " ";
            }
            else
            {
                cout << n << " ";
            }
        }
        cout << en;
    }

    return 0;
}

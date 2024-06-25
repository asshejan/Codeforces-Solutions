/**
 *   Author : As_Shejan
 *   Created: 2024-05-04 16:27:55
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

        string s;
        cin >> s;
        ll count = 0, ans = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                ans++;
            }
            else
            {
                count = 0;
            }
            if(count >= 3) break;
        }
        if (count >= 3)
        {
            cout << 2 << en;
        }
        else
        {
            cout << ans << en;
        }
    }

    return 0;
}

/**
 *   Author : As_Shejan
 *   Created: 2024-05-23 23:07:40
 **/
#include <bits/stdc++.h>
using namespace std;

#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define vi vector<ll>
#define pi pair<ll, ll>
#define vp vector<pair<ll, ll>>
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

    ll n;
    cin >> n;

    vi a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll m;
    cin >> m;

    vp q(m);

    for (ll i = 0; i < m; i++)
    {
        cin >> q[i].f >> q[i].sc;
    }

    vector<vi> res;

    for (auto que : q)
    {
        ll st = que.f;
        ll end = que.sc;

        vi subarray(a.begin() + st , a.begin() + end + 1); // Correct range
        res.push_back(subarray);
    }

    vi converted(m);
    ll t = 0;

    for (auto &sub : res)
    {
        for (auto &val : sub)
        {
            converted[t].push_back(val);
            
        }
        t++;
    }

    return 0;
}

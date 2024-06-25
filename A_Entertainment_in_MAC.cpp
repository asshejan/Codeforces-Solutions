/**
 *   Author : As_Shejan
 *   Created: 2024-04-27 03:25:00
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

    ll n;
    cin >> n;

    string s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(s[j]>s[j+1]){
                string tmp = s[j];
                s[j] = s[j+1];
                s[j+1] = tmp;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout<< s[i]<<en;
    }

    return 0;
}

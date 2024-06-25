/**
 *   Author : As_Shejan
 *   Created: 2024-05-17 23:26:46
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
    cin>> n;

    vi dp(n+1, -1);

    dp[0] = 0;
    dp[1] = 1;

    for(ll i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<en;

    return 0;
}

/**
 *   Author : As_Shejan
 *   Created: 2024-04-22 01:39:42
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
const ll sieve_N = 2e7;
bool is_prime[sieve_N + 1];
vector<ll> primes;

int32_t main()
{
    FastIO;

    ll n, m, k;
    cin >> n >> m >> k;

    vi a(n), b(m);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i] == b[j] || (a[i] + k) == b[j] || (a[i] - k) == b[j])
            {
                count++;
            }
        }
    }
    cout << count << en;

    return 0;
}

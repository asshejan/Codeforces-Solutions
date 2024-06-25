/**
 *   Author : As_Shejan
 *   Created: 2024-04-21 21:27:11
 **/
#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

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

// void sieve()
// {
//     fill(is_prime, is_prime + sieve_N + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (ll i = 2; i * i <= sieve_N; i++)
//     {
//         if (is_prime[i])
//         {
//             for (ll j = i * i; j <= sieve_N; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (ll i = 2; i <= sieve_N; i++)
//     {
//         if (is_prime[i])
//         {
//             primes.push_back(i);
//         }
//     }
// }

int32_t main()
{
    FastIO;

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        map<ll, ll> m;

        for (ll i = 0; i < n; i++)
        {

            ll val;
            cin >> val;
            m[val]++;
        }
        ll count = 0;
        for (auto p : m)
        {
             count += p.sc /3;
        }
        cout<<count<<en;
    }

    return 0;
}

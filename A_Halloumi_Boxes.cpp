/**
 *   Author : As_Shejan
 *   Created: 2024-05-02 09:20:56
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

ll reverseArray(vi &a, ll size)
{
    ll start = 0;
    ll end = size - 1;
    ll count = 0;

    // Swap elements from start to end until we reach the middle
    while (start < end)
    {
        // Swap elements at start and end indices
        ll temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        // Move start index forward and end index backward
        start++;
        end--;
        count++;
    }
    return count;
}

bool isSorted(vi &vec)
{
    ll n = vec.size();
    for (ll i = 0; i < n - 1; ++i)
    {
        if (vec[i] > vec[i + 1])
        {
            return false;
        }
    }
    return true;
}

int32_t main()
{
    FastIO;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vi a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (k == 1 && isSorted(a))
        {
            YES;
        }
        else if (k >= 2)
        {
            YES;
        }
        else
        {
            NO;
        }
    }

    return 0;
}

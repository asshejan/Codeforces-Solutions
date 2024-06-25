/**
*   Author : As_Shejan
*   Created: 2024-05-21 22:55:50
**/
#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vi vector<ll>
#define pi pair<ll, ll>
#define f first
#define sc second
#define all(x) x.begin(), x.end()
#define en   '\n'
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

typedef long long  ll;
typedef unsigned long long ull;
typedef long double lld;

int32_t main()
{
    FastIO;

    ll n;
    cin >> n;

    vector<pi> activities(n);

    for(ll i = 0; i < n; i++){
        cin >> activities[i].f >> activities[i].sc;
    }

    
   sort(all(activities), [](pi &a, pi &b) {
        return a.sc < b.sc;
    });


    ll count = 0;
    ll last_end_time = 0;

    for (auto& activity : activities) {
        if (activity.f >= last_end_time) {
            cout << "Start - " << activity.f << ", End - " << activity.sc << en;
            last_end_time = activity.sc;
            count++;
        }
    }

    cout << "Maximum number of non-overlapping activities: " << count << en;

    return 0;
}

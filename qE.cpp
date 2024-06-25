/**
 *   Author : As_Shejan
 *   Created: 2024-05-06 19:23:37
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
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        int x, y;
        cin >> x >> y;

        double hare_position = 0.0;
        double hare_speed = x;
        double tortoise_position = 0.0;
        double tortoise_speed = y;

        int seconds = 0;

        while (true)
        {
            hare_position += hare_speed;
            tortoise_position += tortoise_speed;
            ++seconds;

            if (tortoise_position > hare_position)
            {
                cout << "Case #" << t << ": " << seconds << endl;
                break;
            }

          
            hare_speed /= 2.0;
        }
    }

    return 0;
}

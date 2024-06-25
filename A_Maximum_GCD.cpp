/**
*   Author : As_Shejan
*   Created: 2024-05-04 16:13:43
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

    ll t;
    cin >> t;
    while(t--)
    {
         ll n;
         cin>> n;

         if(n == 2){
            cout<<1<<en;
         }else{
            cout<<(int)(n/2)<<en;
         }
    }

    return 0;
}

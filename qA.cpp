/**
 *   Author : As_Shejan
 *   Created: 2024-05-06 21:22:08
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

string decimalTo20BitBinary(ll decimalNum)
{

    bitset<20> bits(decimalNum);
    return bits.to_string();
}
ll bitwiseOrAndConvert(string &binary1,string &binary2)
{
    // Check if both binary strings are exactly 20 characters long

    // Convert binary strings to bitsets
    bitset<20> bits1(binary1);
    bitset<20> bits2(binary2);

    // Perform bitwise OR operation
    bitset<20> resultBits = bits1 | bits2;

    // Convert result bitset to decimal integer
    int resultDecimal = static_cast<int>(resultBits.to_ulong());

    return resultDecimal;
}

int32_t main()
{
    FastIO;

    ll n, q;
    cin >> n >> q;

    vi a(n), x(q);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for(ll i=0;i<n;i++){

    // }
    ll m = 0, res;
    while (q--)
    {
        ll x;
        cin >> x;
        for (ll i = 0; i < n; i++)
        {
            string bin1 = decimalTo20BitBinary(a[i]);
            string bin2 = decimalTo20BitBinary(x);
            

            res = bitwiseOrAndConvert(bin1, bin2);
            
            if(res> m){
                m = res;
            }
        }
        cout<<m<<en;
    }

    return 0;
}

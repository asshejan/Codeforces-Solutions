#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll x, y, g;
        cin >> x >> y >> g;

        ll total = x + y;

        ll bn = (total * g) / y;
        ll gn = (total * g) / x;

        ll d;
        d = gcd(bn, gn);

        bn = bn / d;
        gn = gn / d;

        cout << "case " << i << ": " << bn << "/" << gn << en;
    }

    return 0;
}
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

    while (t--)
    {
        ll x;
        cin >> x;
        ll mn = 0;

        for (ll i = 1; i <= x; i++)
        {
            ll a;
            cin >> a;

            ll lm = a - i;
            mn = max(lm, mn);
        }

        cout << mn << en;
    }

    return 0;
}
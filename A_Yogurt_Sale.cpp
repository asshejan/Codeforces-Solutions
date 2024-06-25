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
        ll n, a, b;
        cin >> n>> a >> b;

        if (n % 2 == 0)
        {

            if ((a * 2) > b)
            {
                cout << (n / 2) * b << en;
            }
            else
            {
                cout << a * n << en;
            }
        }
        else
        {
            if ((a * 2) > b)
            {
                cout << (((n - 1) / 2) * b) + a << en;
            }
            else
            {
                cout << a * n << en;
            }
        }
    }

    return 0;
}
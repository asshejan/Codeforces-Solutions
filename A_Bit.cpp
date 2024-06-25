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
    ll cnt = 0;
    while (t--)
    {
        char a[3];
        for (ll i = 0; i < 3; i++)
        {
            cin>>a[i];
            // cout<<a[i];
        }

       if ((a[1] - '0') == -5)
            {
                // cout << "check " << a[1] << en;
                cnt++;
            }
            else
            {
                cnt--;
            }
    }
    cout << cnt << en;

    return 0;
}
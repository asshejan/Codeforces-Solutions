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
        char c[5];
        
        ll cnta = 0, cntb = 0;
        for (ll i = 0; i < 5; i++)
        {
            cin>>c[i];
            if (c[i] == 'A')
            {
                cnta++;
            }
            else
            {
                cntb++;
            }
        }
        if (cnta > cntb)
        {
            cout << "A" << en;
        }
        else
        {
            cout << "B" << en;
        }
    }

    return 0;
}
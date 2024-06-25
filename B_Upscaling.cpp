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

        ll n;
        cin >> n;
        for (ll i = 1; i <=  n; i++)
        {

            ll c = 2;
            while (c--)
            {
                for (ll j = 1; j <= n; j++)
                {
                    if((i+j) % 2 == 0){
                        cout<< "##";
                    }else{
                        cout<< "..";
                    }
                }
                cout<<en;
            }

        }
    }

    return 0;
}
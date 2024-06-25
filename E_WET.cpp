#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    ll sum = 0, mn = LLONG_MAX;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum += a[i];
        if(a[i] & 1){
            mn = min(mn, a[i]);
        }
        
    }
    

    if (!(sum & 1))
    {
        cout << sum << en;
        return 0;
    }
    sum -= mn;


    cout << sum << en;

    return 0;
}
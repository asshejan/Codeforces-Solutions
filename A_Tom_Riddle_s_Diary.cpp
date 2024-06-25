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

    set<string> nameList;

    for (ll i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        ll count = 0;

        if (nameList.count(name) > 0)// count library is bool
        {
            cout << "YES" << en;
        }
        else
        {
            cout << "NO" << en;
            nameList.insert(name);
        }
    }

    return 0;
}
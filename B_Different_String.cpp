#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
const ll mod = 1000000007;

void solve()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int f = 0;
        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                cout << "yes\n";
                swap(s[i], s[i + 1]);
                cout << s << endl;
                f = 1;
                break;
            }
        }
        if (!f)
            cout << "No\n";
    }
}
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
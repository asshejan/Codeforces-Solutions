#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = a + (b + c + 2) / 3;

        if (c == 0 && b % 3 != 0)
        {
            ans = -1;
        }
        if (c == 1 && b % 3 == 1)
        {
            ans = -1;
        }
        cout<<ans <<endl;
    }

            return 0;
}

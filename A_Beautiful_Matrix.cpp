
#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                // cout << i << " " << j << endl;
                if (i > j)
                {
                    cout << i - j << en;
                    return 0;
                }
                else if (j > i)
                {
                    cout << j - i << en;
                    return 0;
                }else if((i==j) && ((i==3) || (i==1)) ){
                    cout<<2<<en;
                    return 0;
                }else if((i==j) && ((i==0) || (i==4)) ){
                    cout<<4<<en;
                    return 0;
                }
                else
                {
                    cout << 0 << en;
                    return 0;
                }
            }
        }
    }

    return 0;
}

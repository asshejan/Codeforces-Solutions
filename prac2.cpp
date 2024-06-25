#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long
#define pll pair<long long, long long>
#define pls pair<long long, string>

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    tuple<int, int, int> t = {1, 10, 3};
    int x, ignore, y;
    tie(x, ignore, y) = t;
    cout<<ignore<<en;

    return 0;
}
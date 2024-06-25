#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> p(n), a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int m;
    cin >> m;
    vector<int> c(m);
    for (int i = 0; i < m; i++)
        cin >> c[i];

    map<int, int> front;
    map<int, int> back;

    for (int i = 0; i < n; i++)
    {
        front[p[i]] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        back[p[i]] = b[i];
    }

    set<int> ek, dui, tin;

    for (auto it = front.begin(); it != front.end(); it++)
    {
        if (it->second == 1)
            ek.insert(it->first);
        if (it->second == 2)
            dui.insert(it->first);
        if (it->second == 3)
            tin.insert(it->first);
    }

    for (auto it = back.begin(); it != back.end(); it++)
    {
        if (it->second == 1)
            ek.insert(it->first);
        if (it->second == 2)
            dui.insert(it->first);
        if (it->second == 3)
            tin.insert(it->first);
    }

    for (int i = 0; i < m; i++)
    {
        int x = c[i];
        if (x == 1)
        {
            if (!ek.empty())
            {
                auto it = ek.begin();
                cout << *it << ' ';
                int alu = *it;
                ek.erase(alu);
                dui.erase(alu);
                tin.erase(alu);
            }
            else
            {
                cout << -1 << ' ';
            }
        }
        else if (x == 2)
        {
            if (!dui.empty())
            {
                auto it = dui.begin();
                cout << *it << ' ';
                int alu = *it;
                dui.erase(alu);
                ek.erase(alu);
                tin.erase(alu);
            }
            else
            {
                cout << -1 << ' ';
            }
        }
        else if (x == 3)
        {
            if (!tin.empty())
            {
                auto it = tin.begin();
                cout << *it << ' ';
                int alu = *it;
                tin.erase(alu);
                ek.erase(alu);
                dui.erase(alu);
            }
            else
            {
                cout << -1 << ' ';
            }
        }
    }

    cout << '\n';

    return 0;
}

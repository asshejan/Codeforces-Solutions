#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<unordered_set<string>> words(3);

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < n; ++j) {
                string word;
                cin >> word;
                words[i].insert(word);
            }
        }

        vector<int> points(3, 0);

        for (int i = 0; i < 3; ++i) {
            for (auto word : words[i]) {
                int count = 0;
                for (int j = 0; j < 3; ++j) {
                    if (words[j].count(word))
                        ++count;
                }
                if (count == 1)
                    points[i] += 3;
                else if (count == 2)
                    points[i] += 1;
            }
        }

        for (int i = 0; i < 3; ++i) {
            cout << points[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

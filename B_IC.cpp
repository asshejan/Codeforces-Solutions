#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

       
        unordered_set<char> us;
        int total = 0;

        for (char c : s) {
            if (us.count(c) == 0) {
                
                total += 2;
                us.insert(c);
            } else {
                
                total += 1;
            }
        }

        cout << total << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long


bool isValid(const string& s, int len) {
    int diffCount = 0;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        if (s[i] != s[i % len]) {
            diffCount++;
            if (diffCount > 1) {
                return false;
            }
        }
    }
    
    return true;
}

int shortestRepeatingSubstring(const string& s) {
    int n = s.length();
    
    for (int len = 1; len <= n; len++) {
    
        if (n % len != 0) {
            continue;
        }
        
      
        if (isValid(s, len)) {
            return len;
        }
    }
    
    return n; 
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestRepeatingSubstring(s) << endl;
    }
    
    return 0;
}

    #include <bits/stdc++.h>
    using namespace std;
     
    void solve() {
      int n;
      cin >> n;
     
      vector<int> v(n);
      for (int i = 0; i < n; i++) {
        cin >> v[i];
      }
     
      for (int i = 1; i < n-1; i++) {
        if (v[i-1] < 0) {
          break;
        }
        v[i] -= v[i-1]*2;
        v[i+1] -= v[i-1];
        v[i-1] = 0;
      }
     
      int x = 1;
      for (int i : v) {
        x &= i == 0;
      }
      cout << ((x) ? "YES" : "NO") << endl;
    }
     
    int main() {
      int t;
      cin >> t;
     
      while (t--) {
        solve();
      }
     
      return 0;
    }
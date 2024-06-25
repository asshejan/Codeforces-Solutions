#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countEvergreenSubsequences(int n, int L, int R, vector<int>& a) {
    int count = 0;

    // Traverse through the array and count valid consecutive pairs
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(a[i] - a[i + 1]);
        if (L <= diff && diff <= R) {
            // Calculate number of valid subsequences ending at a[i+1]
            int len = 2; // Minimum length for valid subsequence is 2
            int pairs = 1; // Number of valid pairs ending at a[i+1]

            // Count the number of valid subsequences ending at a[i+1]
            while (i - len + 1 >= 0 && abs(a[i - len + 1] - a[i + 1]) >= L && abs(a[i - len + 1] - a[i + 1]) <= R) {
                pairs = (pairs * 2) % MOD; // Each pair can be extended by appending a[i-len+1]
                ++len;
            }

            // Add the count of subsequences ending at a[i+1] to the total count
            count = (count + pairs) % MOD;
        }
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, L, R;
    cin >> n >> L >> R;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Calculate the total number of evergreen subsequences
    int result = countEvergreenSubsequences(n, L, R, a);

    cout << result << "\n";

    return 0;
}

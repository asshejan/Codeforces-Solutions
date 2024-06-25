#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int countEvergreenSubsequences(int n, int L, int R, vector<int>& a) {
    // Dynamic programming arrays
    vector<long long> dp0(n, 0); // dp0[i]: Number of valid subsequences ending at index i with at least two elements
    vector<long long> dp1(n, 0); // dp1[i]: Number of valid subsequences ending at index i with exactly two elements

    // Prefix sums for efficient range queries
    vector<long long> prefix_dp0(n + 1, 0);
    vector<long long> prefix_dp1(n + 1, 0);

    // Initialize dp1 for the first two elements
    if (n >= 2) {
        if (abs(a[1] - a[0]) >= L && abs(a[1] - a[0]) <= R) {
            dp1[1] = 1;
        }
    }

    // Fill DP arrays
    for (int i = 2; i < n; ++i) {
        // Calculate dp0[i] (sum of dp1[j] where j < i and |a[i] - a[j]| is within [L, R])
        dp0[i] = (prefix_dp1[i - 1] - prefix_dp1[max(0, i - R - 1)]) % MOD;

        // Calculate dp1[i] (sum of dp0[j] where j < i and |a[i] - a[j]| is within [L, R])
        dp1[i] = (prefix_dp0[i - 1] - prefix_dp0[max(0, i - R - 1)]) % MOD;

        // Normalize dp0[i] and dp1[i] to be non-negative
        if (dp0[i] < 0) dp0[i] += MOD;
        if (dp1[i] < 0) dp1[i] += MOD;

        // Update prefix sums
        prefix_dp0[i] = (prefix_dp0[i - 1] + dp0[i]) % MOD;
        prefix_dp1[i] = (prefix_dp1[i - 1] + dp1[i]) % MOD;
    }

    // Calculate total number of evergreen subsequences (sum of dp0[i] for all i >= 1)
    long long totalEvergreenSubsequences = 0;
    for (int i = 1; i < n; ++i) {
        totalEvergreenSubsequences = (totalEvergreenSubsequences + dp0[i]) % MOD;
    }

    return totalEvergreenSubsequences;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, L, R;
        cin >> n >> L >> R;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate the number of evergreen subsequences modulo MOD
        int result = countEvergreenSubsequences(n, L, R, a);

        // Output the result for the current test case
        cout << result << "\n";
    }

    return 0;
}

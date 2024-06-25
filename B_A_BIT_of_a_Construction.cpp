#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int k) {
    vector<int> result;
    int current = 1; // Start with the number 1 (2^0)

    while (k > 0) {
        if (k & 1) { // If the least significant bit of k is 1
            result.push_back(current); // Add the current power of 2 to the result
        }
        k >>= 1; // Right shift k to check the next bit
        current <<= 1; // Multiply current by 2 to get the next power of 2
    }

    // If the result size is less than n, add 0s to complete the sequence
    while (result.size() < n) {
        result.push_back(0);
    }

    // Output the result
    for (int i = 0; i < n; ++i) {
        cout << result[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    long long total_sum = 0;
    
    // Calculate sum of absolute differences
    for (int i = 0; i < n; ++i) {
        // Number of elements less than a[i] (to the left of a[i])
        long long num_left = i;
        // Number of elements greater than a[i] (to the right of a[i])
        long long num_right = n - 1 - i;

        // Contribution of a[i] being the smaller number
        long long left_sum = num_left * (long long)a[i] - (i > 0 ? accumulate(a.begin(), a.begin() + i, 0LL) : 0LL);
        // Contribution of a[i] being the larger number
        long long right_sum = (i < n - 1 ? accumulate(a.begin() + i + 1, a.end(), 0LL) : 0LL) - num_right * (long long)a[i];

        // Add to the total sum
        total_sum += (left_sum + right_sum);
    }

    // Output the total sum
    cout << total_sum << endl;

    return 0;
}

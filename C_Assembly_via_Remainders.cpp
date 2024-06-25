#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }

        // Start with a_1 as a large number (e.g., 10^9)
        long long a1 = 1000000000; // 10^9
        vector<long long> a(n);
        a[0] = a1;

        // Calculate a_i for i from 2 to n
        for (int i = 1; i < n; i++) {
            a[i] = x[i - 1] + a[i - 1];
        }

        // Output the array a
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

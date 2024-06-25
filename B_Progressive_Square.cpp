#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool canFormProgressiveSquare(int n, int c, int d, const vector<int>& b) {
    // Set to store array elements for quick lookup
    unordered_set<int> elements(b.begin(), b.end());

    // Calculate the elements of the progressive square
    int a_11 = b[0]; // First element of the array is a_1,1

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int expected_value = a_11 + i * d + j * c;
            if (elements.find(expected_value) == elements.end()) {
                return false; // Element not found in array
            }
        }
    }

    return true; // All elements of the square are present in the array
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> b(n * n);
        for (int i = 0; i < n * n; ++i) {
            cin >> b[i];
        }

        if (canFormProgressiveSquare(n, c, d, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

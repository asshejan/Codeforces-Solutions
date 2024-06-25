#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to perform modular exponentiation (base^exp % mod)
int modExp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * 1LL * base) % mod;
        base = (base * 1LL * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate number of valid arrays for given n and k
int countValidArrays(int n, int k) {
    if (k == 1) {
        // If k == 1, all elements must be 1 since max value is 1
        return modExp(2, n, MOD);
    }

    // Precompute powers of 2 up to 2*k % mod
    vector<int> powersOf2(2 * k + 1);
    powersOf2[0] = 1;
    for (int i = 1; i <= 2 * k; ++i) {
        powersOf2[i] = (2 * 1LL * powersOf2[i - 1]) % MOD;
    }

    // Calculate total arrays of length n with numbers in [0, 2^k-1]
    int totalArrays = modExp(2, n, MOD);

    // Calculate the number of arrays that violate the bitwise AND constraint
    // Using inclusion-exclusion principle
    int notValidArrays = 0;

    for (int j = 1; j <= k; ++j) {
        if (j % 2 == 1)
            notValidArrays = (notValidArrays + powersOf2[j * n]) % MOD;
        else
            notValidArrays = (notValidArrays - powersOf2[j * n] + MOD) % MOD;
    }

    // Calculate valid arrays count
    int validArrays = (totalArrays - notValidArrays + MOD) % MOD;

    return validArrays;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int result = countValidArrays(n, k);
        cout << result << endl;
    }

    return 0;
}

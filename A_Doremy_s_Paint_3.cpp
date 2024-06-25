#include <iostream>
#include <vector>

using namespace std;

int maxPointsFromShootingGlasses(vector<int>& V) {
    int N = V.size();
    if (N == 0) return 0;
    
    // dp[i][j] will store the maximum points by shooting glasses from index i to j
    vector<vector<int>> dp(N, vector<int>(N, 0));
    
    // Fill dp table for increasing subarray lengths
    for (int len = 1; len <= N; ++len) { // length of subarray
        for (int i = 0; i <= N - len; ++i) {
            int j = i + len - 1;
            
            // Base case: shooting a single glass
            if (i == j) {
                dp[i][j] = V[i];
            } else {
                // Calculate maximum points for shooting each glass k in the subarray [i, j]
                for (int k = i; k <= j; ++k) {
                    int points = V[k]; // Points earned by shooting glass k
                    
                    // Points earned from left neighbor (if exists)
                    if (k > i) {
                        points *= V[k-1];
                    }
                    
                    // Points earned from right neighbor (if exists)
                    if (k < j) {
                        points *= V[k+1];
                    }
                    
                    // Add points from shooting glass k and remaining subproblems
                    int leftPoints = (k > i) ? dp[i][k-1] : 0;
                    int rightPoints = (k < j) ? dp[k+1][j] : 0;
                    
                    dp[i][j] = max(dp[i][j], points + leftPoints + rightPoints);
                }
            }
        }
    }
    
    return dp[0][N-1];
}

int main() {
    int N;
    cin >> N;
    
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
        cin >> V[i];
    }
    
    // Calculate the maximum points Bablu can collect
    int maxPoints = maxPointsFromShootingGlasses(V);
    
    cout << maxPoints << endl;
    
    return 0;
}

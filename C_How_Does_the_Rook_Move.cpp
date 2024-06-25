#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int countValidConfigurations(int n, int k, vector<pair<int, int>>& moves) {
    set<int> occupiedRows, occupiedCols;
    
    // Place the initial moves on the board
    for (auto& move : moves) {
        occupiedRows.insert(move.first);
        occupiedCols.insert(move.second);
    }
    
    // Remaining empty rows and columns
    int emptyRows = n - occupiedRows.size();
    int emptyCols = n - occupiedCols.size();
    
    // Total valid configurations: choose k empty rows and k empty columns to place rooks
    // C(emptyRows, k) * C(emptyCols, k) % MOD
    long long waysToPlaceWhiteRooks = 1;
    for (int i = 0; i < k; ++i) {
        waysToPlaceWhiteRooks = (waysToPlaceWhiteRooks * (emptyRows - i)) % MOD;
    }
    long long waysToPlaceBlackRooks = 1;
    for (int i = 0; i < k; ++i) {
        waysToPlaceBlackRooks = (waysToPlaceBlackRooks * (emptyCols - i)) % MOD;
    }
    
    // Calculate total valid configurations
    long long totalConfigurations = (waysToPlaceWhiteRooks * waysToPlaceBlackRooks) % MOD;
    
    return totalConfigurations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<pair<int, int>> moves;
        for (int i = 0; i < k; ++i) {
            int r, c;
            cin >> r >> c;
            moves.push_back({r, c});
        }
        
        int result = countValidConfigurations(n, k, moves);
        cout << result << endl;
    }
    
    return 0;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        
        string preferences;
        cin >> preferences; // Resident preferences
        
        // Count the number of zeros (left side) and ones (right side)
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; ++i) {
            if (preferences[i] == '0') zeros++;
            else ones++;
        }
        
        int satisfied_zeros = 0, satisfied_ones = 0;
        int min_diff = n;
        int best_position = 0;
        
        // Iterate through houses to find the optimal position for the road
        for (int i = 0; i <= n; ++i) {
            if (i > 0) {
                if (preferences[i - 1] == '0') satisfied_zeros++;
                else satisfied_ones++;
            }
            
            int unsatisfied_zeros = zeros - satisfied_zeros;
            int unsatisfied_ones = ones - satisfied_ones;
            
            int half_zeros = (zeros + 1) / 2;
            int half_ones = (ones + 1) / 2;
            
            if (satisfied_zeros >= half_zeros && satisfied_ones >= half_ones) {
                // Both sides have at least half of the residents satisfied
                int diff = abs(n / 2 - i);
                if (diff < min_diff) {
                    min_diff = diff;
                    best_position = i;
                }
            }
        }
        
        cout << best_position << endl;
    }
    
    return 0;
}

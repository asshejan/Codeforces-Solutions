#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool possible = false;
        int zeroSegments = 0;
        
        // Count continuous segments of zeros
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                // Start of a new segment
                if (i == 0 || s[i - 1] == '1') {
                    zeroSegments++;
                }
            }
        }
        
        // Determine if it's possible to achieve the desired configuration
        if (zeroSegments > 1) {
            possible = true;
        } else if (zeroSegments == 1) {
            // Check if the single segment of zeros is not adjacent to itself
            int start = s.find('0');
            int end = s.rfind('0');
            if (end - start + 1 != n) {
                possible = true;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

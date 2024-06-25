#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, PB, PS;
        cin >> n >> k >> PB >> PS;
        
        vector<int> p(n), a(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            p[i]--; // Convert to 0-based index
        }
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int bodyaScore = 0;
        int sashaScore = 0;
        int bodyaPos = PB - 1; // Convert to 0-based index
        int sashaPos = PS - 1; // Convert to 0-based index
        
        for (int i = 0; i < k; ++i) {
            // Update scores
            bodyaScore += a[bodyaPos];
            sashaScore += a[sashaPos];
            
            // Determine next positions
            int nextBodyaPos = p[bodyaPos];
            int nextSashaPos = p[sashaPos];
            
            // Update positions
            bodyaPos = nextBodyaPos;
            sashaPos = nextSashaPos;
        }
        
        // Determine winner
        if (bodyaScore > sashaScore) {
            cout << "Bodya\n";
        } else if (sashaScore > bodyaScore) {
            cout << "Sasha\n";
        } else {
            cout << "Draw\n";
        }
    }
    
    return 0;
}

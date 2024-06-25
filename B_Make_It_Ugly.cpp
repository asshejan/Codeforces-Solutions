#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int minElementsToRemove(vector<int>& a) {
    int n = a.size();
    
    // Count frequency of each element
    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }
    
    // Find the most frequent element
    int maxFreq = 0;
    for (auto& entry : freq) {
        if (entry.second > maxFreq) {
            maxFreq = entry.second;
        }
    }
    
    // If all elements are already the same
    if (maxFreq == n) {
        return -1; // Cannot make the array un-beautiful
    }
    
    // Count elements that need to be removed
    int mismatches = n - maxFreq; // Number of elements that are not the target
    return mismatches;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Calculate the minimum number of elements to remove
        int result = minElementsToRemove(a);
        cout << result << endl;
    }
    
    return 0;
}

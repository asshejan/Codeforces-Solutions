#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

// Function to calculate the greatest common divisor (GCD)
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate the least common multiple (LCM)
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        ll a, b, m;
        cin >> a >> b >> m; // Frequency of launches for the first and second installations, and visibility time
        
        // Calculate the LCM of launch frequencies
        ll lcm_ab = lcm(a, b);
        
        // Calculate the number of aligned launches within the visibility time
        ll aligned_launches = m / lcm_ab;
        
        // Calculate the number of aligned launches for the last incomplete interval
        ll last_incomplete = m - (aligned_launches * lcm_ab);
        
        // Calculate the number of launches for each installation within the last incomplete interval
        ll aligned_from_a = min(last_incomplete / a + 1, a);
        ll aligned_from_b = min(last_incomplete / b + 1, b);
        
        // Calculate the total number of simultaneous fireworks visible
        ll total = aligned_launches * (a + b) + aligned_from_a + aligned_from_b;
        
        cout << total << endl;
    }
    
    return 0;
}

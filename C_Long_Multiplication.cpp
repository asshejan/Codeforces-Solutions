#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

    
pair<string, string> maximizeProductBySwappingDigits(long long x, long long y) {
    
    string xStr = to_string(x);
    string yStr = to_string(y);
    
    int maxLength = max(xStr.length(), yStr.length());
    xStr = string(maxLength - xStr.length(), '0') + xStr;
    yStr = string(maxLength - yStr.length(), '0') + yStr;
    
   
    string maxX = xStr, maxY = yStr;
    long long maxProduct = x * y; 
    
    
    for (int i = maxLength - 1; i >= 0; --i) {
        
        swap(maxX[i], maxY[i]);
        
        
        long long swappedProduct = stoll(maxX) * stoll(maxY);
        
        
        if (swappedProduct > maxProduct) {
            maxProduct = swappedProduct;
            
        } else {
            
            swap(maxX[i], maxY[i]);
        }
    }
    
    return {maxX, maxY};
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        pair<string, string> result = maximizeProductBySwappingDigits(x, y);

        if(result.first>result.second){
            cout << result.first << endl;
            cout << result.second << endl;
        }else{
            cout << result.second << endl;
            cout << result.first << endl;

        }
        
    }
    
    return 0;
}

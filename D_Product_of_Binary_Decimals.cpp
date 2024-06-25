#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long


bool check2(int n) {
    while (n) {
        int d = n%10;
        n = n/10;
        if (d!=0 && d!=1) {
            return false;
        }
    }
    return true;
}
 
bool check(int n) {
    if (check2(n)) return true;
    for (int i = 2; i*i <= n+1; i++) {
        if (n%i==0) {
            int f1 = i;
            int f2 = n/i;
            if (check(f1) && check(f2)) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        if(check(n)){
            cout<<"YES"<<en;
        }else{
            cout<<"NO"<<en;
        }
    }

    
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    if(n == 0 || n == 1){
        cout<<10<<en;
    }else if(n == 5){
        cout<<7<<en;
    }else if(n == 9){
        cout<<0<<en;
    }else if(n == 12 || n == 2){
        cout<<8<<en;
    }else if(n == 11){
        cout<<6<<en;
    }else if(n == 8 || n == 6 || n == 7){
        cout<<7<<en;
    }else if(n == 3 || n == 10){
        cout<<9<<en;
    }else if(n == 4){
        cout<<8<<en;
    }
    
    
    return 0;
}
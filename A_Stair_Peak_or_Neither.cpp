#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--){

        ll a, b, c;
        cin>>a>>b>>c;

        if(a< b && b<c){
            cout<<"STAIR"<<en;
        }else if(b > a && b>c){
            cout<<"PEAK"<<en;
        }else{
            cout<<"NONE"<<en;
        }

    }
    
    return 0;
}
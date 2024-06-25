#include <bits/stdc++.h>
using namespace std;
#define en "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        string input;
        cin >> input;

        size_t colonPos = input.find(':');

        string hourStr = input.substr(0, colonPos);
        string minuteStr = input.substr(colonPos + 1);

        ll hour = stoi(hourStr);
        ll minute = stoi(minuteStr);

        if (hour == 0) {
            if (minute < 10) {
                cout << "12" << ":" << "0" << minute << " AM" << en;
            } else {
                cout << "12" << ":" << minute << " AM" << en;
            }
        } else if (hour >= 12) {
            if (hour > 12)
                hour -= 12;
            if (hour < 10)
                cout << "0";
            cout << hour << ":";
            if (minute < 10)
                cout << "0";
            cout << minute << " PM" << en;
        } else {
            if (hour < 10)
                cout << "0";
            cout << hour << ":";
            if (minute < 10)
                cout << "0";
            cout << minute << " AM" << en;
        }
    }

    return 0;
}

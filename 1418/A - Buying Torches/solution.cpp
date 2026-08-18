#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;
 
        long long sticksNeeded = k * (y + 1);
 
        // Number of stick trades
        long long stickTrades = (sticksNeeded - 1 + (x - 2)) / (x - 1);
 
        // k trades to exchange sticks for k coal
        long long answer = stickTrades + k;
 
        cout << answer << '
';
    }
 
    return 0;
}
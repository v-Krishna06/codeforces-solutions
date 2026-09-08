#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        long long sum = x + y;
        long long best = 0;
        bool smaller = false;
 
        for (int bit = 30; bit >= 0; bit--) {
            int xb = (x >> bit) & 1;
            int sb = (sum >> bit) & 1;
 
            if (smaller) {
                if (sb)
                    best |= (1LL << bit);
            } else {
                if (xb == 0) {
                    continue;
                } else {
                    if (sb == 1) {
                        best |= (1LL << bit);
                    } else {
                        smaller = true;
                    }
                }
            }
        }
 
        cout << sum << " " << x - best << '
';
    }
 
    return 0;
}
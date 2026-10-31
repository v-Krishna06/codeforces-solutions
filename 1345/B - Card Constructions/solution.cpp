#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        int ans = 0;
 
        while (n >= 2) {
            long long h = (sqrt(24 * n + 1) - 1) / 6;
 
            long long cards = h * (3 * h + 1) / 2;
 
            n -= cards;
            ans++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
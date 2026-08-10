#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long sum = 0;
        long long mx = 0;
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            sum += x;
            mx = max(mx, x);
 
            if (2 * mx == sum) {
                ans++;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
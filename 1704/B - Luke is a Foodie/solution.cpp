#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
 
        vector<long long> a(n);
 
        for (auto &v : a)
            cin >> v;
 
        long long low = a[0] - x;
        long long high = a[0] + x;
 
        int ans = 0;
 
        for (int i = 1; i < n; i++) {
 
            long long newLow = a[i] - x;
            long long newHigh = a[i] + x;
 
           
            low = max(low, newLow);
            high = min(high, newHigh);
 
            
            if (low > high) {
                ans++;
 
                
                low = newLow;
                high = newHigh;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
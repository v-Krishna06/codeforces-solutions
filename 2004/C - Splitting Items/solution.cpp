#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end(), greater<long long>());
 
        long long diff = 0;
        long long extra = 0;
 
        for (int i = 0; i < n; i += 2) {
            if (i + 1 < n) {
                diff += a[i] - a[i + 1];
            } else {
                extra = a[i];
            }
        }
 
        long long ans = extra + max(0LL, diff - k);
 
        cout << ans << '
';
    }
 
    return 0;
}
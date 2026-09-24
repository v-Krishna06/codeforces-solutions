#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int &x : a)
            cin >> x;
 
        int ans = 0;
 
        // Case 1: a[n-1] - a[i]
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n - 1] - a[i]);
        }
 
        // Case 2: a[i] - a[0]
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }
 
        // Case 3: a[i] - a[i+1]
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] - a[i + 1]);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        int a[n], ans = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (__builtin_popcount(a[i]) % 2 == 0)
                ans++;
        }
 
        cout << ans << " ";
 
        while (q--) {
            int p, x;
            cin >> p >> x;
            p--;
 
            if (__builtin_popcount(a[p]) % 2 == 0)
                ans--;
 
            a[p] = x;
 
            if (__builtin_popcount(x) % 2 == 0)
                ans++;
 
            cout << ans << " ";
        }
 
        cout << '
';
    }
}
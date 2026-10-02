#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        long long g1 = 0, g2 = 0;
 
        for (int i = 0; i < n; i += 2)
            g1 = gcd(g1, a[i]);
 
        for (int i = 1; i < n; i += 2)
            g2 = gcd(g2, a[i]);
 
        bool ok = true;
 
        for (int i = 1; i < n; i += 2) {
            if (a[i] % g1 == 0) {
                ok = false;
                break;
            }
        }
 
        if (ok) {
            cout << g1 << '
';
            continue;
        }
 
        ok = true;
 
        for (int i = 0; i < n; i += 2) {
            if (a[i] % g2 == 0) {
                ok = false;
                break;
            }
        }
 
        if (ok)
            cout << g2 << '
';
        else
            cout << 0 << '
';
    }
}
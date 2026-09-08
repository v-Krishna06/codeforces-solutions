#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        // Count only the easy problems INSIDE
        int zeros = 0;
 
        for (int i = 1; i < n - 1; i++) {
            if (a[i] == 0) {
                zeros++;
            }
        }
 
        int hard = a[0] + a[n - 1];
 
        if (hard == 0) {
            cout << 0 << '
';
        }
        else if (hard == 1) {
            if (zeros >= 1)
                cout << 1 << '
';
            else
                cout << -1 << '
';
        }
        else { // hard == 2
            if (zeros >= 2)
                cout << 2 << '
';
            else
                cout << -1 << '
';
        }
    }
 
    return 0;
}
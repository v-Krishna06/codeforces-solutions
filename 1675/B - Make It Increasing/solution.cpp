#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int &x : a)
            cin >> x;
 
        int ans = 0;
        bool possible = true;
 
        for (int i = n - 2; i >= 0; i--) {
 
            while (a[i] >= a[i + 1]) {
 
                if (a[i] == 0) {
                    possible = false;
                    break;
                }
 
                a[i] /= 2;
                ans++;
            }
 
            if (!possible)
                break;
        }
 
        if (possible)
            cout << ans << '
';
        else
            cout << -1 << '
';
    }
 
    return 0;
}
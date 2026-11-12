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
 
        sort(a.rbegin(), a.rend());
 
        vector<bool> used(n + 1, false);
 
        bool possible = true;
 
        for (int i = 0; i < n; i++) {
 
            while (a[i] > 0 && (a[i] > n || used[a[i]])) {
                a[i] /= 2;
            }
 
            if (a[i] == 0) {
                possible = false;
                break;
            }
 
            used[a[i]] = true;
        }
 
        cout << (possible ? "YES" : "NO") << '
';
    }
 
    return 0;
}
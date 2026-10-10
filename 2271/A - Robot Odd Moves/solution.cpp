#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        if (a == 0) {
            if (b == 0) cout << 0 << '
';
            else if (b == 1) cout << 1 << '
';
            else cout << -1 << '
';
        } 
        else if (b <= a && (a - b) % 2 == 0) {
            cout << a << '
';
        } 
        else if (b <= a + 1 && (a - b) % 2 != 0) {
            cout << a + 1 << '
';
        } 
        else {
            cout << -1 << '
';
        }
    }
 
    return 0;
}
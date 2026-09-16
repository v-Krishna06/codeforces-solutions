#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n == 2) {
            cout << -1 << '
';
            continue;
        }
 
        int x = 1;
 
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << x << " ";
                x += 2;
 
                if (x > n * n) {
                    x = 2;
                }
            }
            cout << '
';
        }
 
        
    }
 
    return 0;
}
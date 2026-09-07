#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int ans = 0;
 
    for (int i = 1; i <= n; i++) {
        int x = i;
        int cnt = 0;
 
        for (int j = 2; j <= x; j++) {
            if (x % j == 0) {
                cnt++;
 
                // Remove all occurrences of this prime
                while (x % j == 0) {
                    x /= j;
                }
            }
        }
 
        if (cnt == 2) {
            ans++;
        }
    }
 
    cout << ans << endl;
 
    return 0;
}
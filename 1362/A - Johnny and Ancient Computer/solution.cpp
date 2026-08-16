#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        int cntA = 0, cntB = 0;
 
        // Count power of 2 in a
        while (a % 2 == 0) {
            a /= 2;
            cntA++;
        }
 
        // Count power of 2 in b
        while (b % 2 == 0) {
            b /= 2;
            cntB++;
        }
 
        // Odd parts must be equal
        if (a != b) {
            cout << -1 << '
';
            continue;
        }
 
        int diff = abs(cntA - cntB);
 
        // Each operation can handle at most 3 powers of 2
        cout << (diff + 2) / 3 << '
';
    }
 
    return 0;
}
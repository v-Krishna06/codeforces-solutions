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
 
        // Largest power of 2 less than n
        int k = 1;
 
        while (k * 2 < n) {
            k *= 2;
        }
 
        // Numbers smaller than k
        for (int i = 1; i < k; i++) {
            cout << i << " ";
        }
 
        // Put 0 immediately before k
        cout << 0 << " " << k << " ";
 
        // Remaining numbers
        for (int i = k + 1; i < n; i++) {
            cout << i << " ";
        }
 
        cout << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> cnt(n + 1, 0);
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
 
        bool aliceWins = false;
 
        for (int x = 0; x <= n; x++) {
            if (cnt[x] < 2 * k) {
                aliceWins = (cnt[x] == 2 * k - 1);
                break;
            }
        }
 
        cout << (aliceWins ? "YES" : "NO") << '
';
    }
 
    return 0;
}
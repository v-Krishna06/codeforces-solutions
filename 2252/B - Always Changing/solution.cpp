#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }
 
        const int NEG = -1e9;
        int dp[2][2];
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                dp[i][j] = NEG;
 
        for (char ch : s) {
            int b = ch - '0';
            int ndp[2][2];
 
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    ndp[i][j] = dp[i][j];
 
            // start new subsequence
            ndp[b][b] = max(ndp[b][b], 1);
 
            // extend
            for (int st = 0; st < 2; st++) {
                if (dp[st][1 - b] != NEG)
                    ndp[st][b] = max(ndp[st][b], dp[st][1 - b] + 1);
            }
 
            memcpy(dp, ndp, sizeof(dp));
        }
 
        int diff = c0 - c1;
        int best = -1;
 
        for (int st = 0; st < 2; st++) {
            for (int last = 0; last < 2; last++) {
                if (dp[st][last] == NEG) continue;
 
                int keepDiff;
                if (st == 0 && last == 0) keepDiff = 1;
                else if (st == 1 && last == 1) keepDiff = -1;
                else keepDiff = 0;
 
                if (keepDiff == diff - 1 ||
                    keepDiff == diff ||
                    keepDiff == diff + 1) {
                    best = max(best, dp[st][last]);
                }
            }
        }
 
        if (best == -1) cout << -1 << '
';
        else cout << n - best << '
';
    }
 
    return 0;
}
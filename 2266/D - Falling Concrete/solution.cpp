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
 
        vector<long long> b(n);
 
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
 
            // i+1 because original problem uses 1-based index
            b[i] = a - (i + 1);
        }
 
        sort(b.begin(), b.end());
 
        b.erase(unique(b.begin(), b.end()), b.end());
 
        int ans = 1;
        int cur = 1;
 
        for (int i = 1; i < b.size(); i++) {
            if (b[i] == b[i - 1] + 1) {
                cur++;
            } else {
                cur = 1;
            }
 
            ans = max(ans, cur);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
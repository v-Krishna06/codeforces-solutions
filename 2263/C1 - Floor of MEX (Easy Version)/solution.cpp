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
 
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
 
        vector<int> diff(n + 1);
 
        for (int k = 1; k <= n; k++) {
            long long l = 1LL * a[k] * k;
            long long r = 1LL * (a[k] + 1) * k - 1;
 
            if (l >= n) continue;
 
            r = min(r, 1LL * n - 1);
 
            diff[l]++;
            diff[r + 1]--;
        }
 
        vector<int> ans;
        int blocked = 0;
 
        for (int x = 0; x < n; x++) {
            blocked += diff[x];
 
            if (blocked == 0)
                ans.push_back(x);
        }
 
        cout << ans.size() << '
';
 
        for (int x : ans)
            cout << x << ' ';
 
        cout << '
';
    }
 
    return 0;
}
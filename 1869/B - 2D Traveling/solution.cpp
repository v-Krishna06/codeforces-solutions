#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll dist(pair<ll, ll> a, pair<ll, ll> b) {
    return abs(a.first - b.first) +
           abs(a.second - b.second);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
 
        vector<pair<ll, ll>> p(n + 1);
 
        for (int i = 1; i <= n; i++) {
            cin >> p[i].first >> p[i].second;
        }
 
        ll ans = dist(p[a], p[b]);
        ll da = LLONG_MAX, db = LLONG_MAX;
 
        for (int i = 1; i <= k; i++) {
            da = min(da, dist(p[a], p[i]));
            db = min(db, dist(p[b], p[i]));
        }
 
        if (k > 0) {
            ans = min(ans, da + db);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
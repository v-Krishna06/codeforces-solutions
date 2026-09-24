#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        // Max heap
        priority_queue<long long> pq;
 
        long long sum = 0;
        long long ans = LLONG_MIN;
 
        for (int i = 0; i < n; i++) {
 
            // If a[i] is the last selected element,
            // we need m-1 elements before it.
            if (i >= m - 1) {
                long long score = 1LL * m * a[i] - sum;
                ans = max(ans, score);
            }
 
            // Add a[i] for future positions
            pq.push(a[i]);
            sum += a[i];
 
            // Keep only the smallest m-1 elements
            if ((int)pq.size() > m - 1) {
                sum -= pq.top();
                pq.pop();
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
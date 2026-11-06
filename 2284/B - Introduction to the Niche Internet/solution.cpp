#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
 
    sort(a.begin(), a.end());
 
    long long sum = 0;
 
    for (int i = n - k; i < n; i++) {
        sum += a[i];
    }
 
    if (k < n && sum <= 1LL * k * a[n - k - 1]) {
        cout << "NO
";
        return;
    }
 
    cout << "YES
";
 
    for (int i = n - k; i < n; i++) {
        cout << a[i] << " ";
    }
 
    for (int i = n - k - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
 
    cout << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) solve();
 
    return 0;
}
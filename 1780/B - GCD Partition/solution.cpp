#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
 
    long long sum = 0;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
 
    long long prefix = 0;
    long long ans = 0;
 
    for(int i = 0; i < n - 1; i++) {
        prefix += a[i];
 
        long long suffix = sum - prefix;
 
        ans = max(ans, gcd(prefix, suffix));
    }
 
    cout << ans << '
';
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
}
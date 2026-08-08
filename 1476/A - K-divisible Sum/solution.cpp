#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        long long m = ((n + k - 1) / k) * k;
        long long ans = (m + n - 1) / n;
 
        cout << ans << endl;
    }
 
    return 0;
}
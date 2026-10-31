#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
        if (n <= 2) {
            cout << -1 << endl;
            continue;
        }
 
        sort(a.begin(), a.end());
 
        long long mid = a[n / 2];
 
        long long x = 2LL * n * mid - sum + 1;
 
        cout << max(0LL, x) << endl;
    }
 
    return 0;
}
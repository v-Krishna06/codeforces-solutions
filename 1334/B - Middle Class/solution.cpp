#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x;
        cin >> n >> x;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end(), greater<int>());
 
        long long sum = 0;
        int ans = 0;
 
        for (int i = 0; i < n; i++) {
            sum += a[i];
 
            if (sum >= 1LL * x * (i + 1)) {
                ans++;
            } 
            else {
                break;
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
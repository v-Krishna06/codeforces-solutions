#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int mn = 31;
 
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
 
            if (x >= mn) continue;
 
            int add = 1 << (x - 1);
 
            for (int j = 0; j < n; j++) {
                if (a[j] % (1 << x) == 0) {
                    a[j] += add;
                }
            }
 
            mn = x;
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "
";
    }
 
    return 0;
}
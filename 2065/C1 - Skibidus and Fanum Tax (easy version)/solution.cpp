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
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int b;
        cin >> b;
 
        a[0] = min(a[0], b - a[0]);
 
        for (int i = 1; i < n; i++) {
            int x = a[i];
            int y = b - a[i];
 
            if (x >= a[i - 1] && y >= a[i - 1]) {
                a[i] = min(x, y);
            } else if (x >= a[i - 1]) {
                a[i] = x;
            } else if (y >= a[i - 1]) {
                a[i] = y;
            } else {
                cout << "NO
";
                goto next;
            }
        }
 
        cout << "YES
";
 
        next:;
    }
 
    return 0;
}
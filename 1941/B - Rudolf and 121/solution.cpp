#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        bool possible = true;
 
        for (int i = 0; i < n - 2; i++) {
            long long x = a[i];
 
            a[i] -= x;
            a[i + 1] -= 2 * x;
            a[i + 2] -= x;
 
            if (a[i + 1] < 0 || a[i + 2] < 0) {
                possible = false;
                break;
            }
        }
 
        if (possible && a[n - 2] == 0 && a[n - 1] == 0)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}
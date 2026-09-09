#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
        for (int &x : p) cin >> x;
 
        bool found = false;
 
        for (int j = 1; j < n - 1; j++) {
            int i = -1, k = -1;
 
            for (int x = 0; x < j; x++) {
                if (p[x] < p[j]) {
                    i = x;
                    break;
                }
            }
 
            for (int x = j + 1; x < n; x++) {
                if (p[x] < p[j]) {
                    k = x;
                    break;
                }
            }
 
            if (i != -1 && k != -1) {
                cout << "YES
";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "
";
                found = true;
                break;
            }
        }
 
        if (!found) {
            cout << "NO
";
        }
    }
 
    return 0;
}
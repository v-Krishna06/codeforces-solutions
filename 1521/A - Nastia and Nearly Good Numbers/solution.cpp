#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long A, B;
        cin >> A >> B;
 
        if (B == 1) {
            cout << "NO
";
        } else {
            cout << "YES
";
            cout << A * (B - 1) << " "
                 << A * (B + 1) << " "
                 << A * 2 * B << "
";
        }
    }
 
    return 0;
}
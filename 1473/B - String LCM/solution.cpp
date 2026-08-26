#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        string s, t;
        cin >> s >> t;
 
        int n = s.size();
        int m = t.size();
 
        int len = lcm(n, m);
 
        string a = "";
        string b = "";
 
        // Repeat s until length becomes LCM
        for (int i = 0; i < len / n; i++) {
            a += s;
        }
 
        // Repeat t until length becomes LCM
        for (int i = 0; i < len / m; i++) {
            b += t;
        }
 
        if (a == b)
            cout << a << '
';
        else
            cout << -1 << '
';
    }
 
    return 0;
}
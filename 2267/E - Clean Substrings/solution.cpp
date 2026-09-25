#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, q;
        cin >> n >> q;
 
        string s;
        cin >> s;
 
        ll trans = 0;
        ll ones = 0;
 
        for (char c : s)
            ones += (c == '1');
 
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1])
                trans += 1LL * (i + 1) * (n - i - 1);
        }
 
        auto getAnswer = [&]() -> ll {
            ll zeros = n - ones;
            return (trans + zeros * ones) / 2;
        };
 
        cout << getAnswer();
 
        while (q--) {
            int p;
            cin >> p;
            --p;
 
            if (p > 0 && s[p] != s[p - 1]) {
                trans -= 1LL * p * (n - p);
            }
 
            if (p + 1 < n && s[p] != s[p + 1]) {
                trans -= 1LL * (p + 1) * (n - p - 1);
            }
 
            if (s[p] == '0') {
                s[p] = '1';
                ones++;
            } else {
                s[p] = '0';
                ones--;
            }
 
            if (p > 0 && s[p] != s[p - 1]) {
                trans += 1LL * p * (n - p);
            }
 
            if (p + 1 < n && s[p] != s[p + 1]) {
                trans += 1LL * (p + 1) * (n - p - 1);
            }
 
            cout << ' ' << getAnswer();
        }
 
        cout << '
';
    }
 
    return 0;
}
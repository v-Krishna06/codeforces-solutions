#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int k = 0, first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                k++;
                if (first == -1) first = i;
                last = i;
            }
        }
 
        if (k == 1) cout << 0 << "
";
        else if (k == 2) cout << 1 << "
";
        else cout << last - first << "
";
    }
    return 0;
}
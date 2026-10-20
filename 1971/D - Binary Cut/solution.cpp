#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int ans = 1;
 
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1]) {
                ans++;
            }
        }
 
        if (s.find("01") != string::npos) {
            ans--;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        if (s[0] != s.back()) {
            s.back() = s[0];
        }
 
        cout << s << '
';
    }
 
    return 0;
}
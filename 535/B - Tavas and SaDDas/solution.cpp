#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
    int ans = (1 << n) - 1;
 
    for (int i = 0; i < n; i++) {
        ans += (s[i] == '7') * (1 << (n - i - 1));
    }
 
    cout << ans << endl;
    return 0;
}
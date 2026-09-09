#include <bits/stdc++.h>
using namespace std;
 
int solve(string s, string target) {
    int n = s.size();
    int j = 1;
    int ans = 0;
 
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == target[j]) {
            if (j == 0) return ans;
            j--;
        } else {
            ans++;
        }
    }
 
    return 1e9;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        cout << min({
            solve(s, "00"),
            solve(s, "25"),
            solve(s, "50"),
            solve(s, "75")
        }) << '
';
    }
 
    return 0;
}
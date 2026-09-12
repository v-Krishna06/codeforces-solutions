#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.size();
 
    // pref[i] = number of equal adjacent pairs
    // among positions 1 to i
    vector<int> pref(n + 1, 0);
 
    for (int i = 1; i < n; i++) {
        pref[i + 1] = pref[i] + (s[i] == s[i - 1]);
    }
 
    int m;
    cin >> m;
 
    while (m--) {
        int l, r;
        cin >> l >> r;
 
        cout << pref[r] - pref[l] << '
';
    }
 
    return 0;
}
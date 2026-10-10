#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int bits = 0;
        while ((1 << bits) <= n) {
            bits++;
        }
 
        int sz = 1 << bits;
 
        vector<int> pref;
        pref.reserve(2 * sz);
 
        for (int i = 0; i < sz; i++) {
            pref.push_back(i ^ (i >> 1));
        }
 
        for (int i = sz - 1; i >= 0; i--) {
            pref.push_back(i ^ (i >> 1));
        }
 
        cout << (int)pref.size() - 1 << '
';
 
        for (int i = 1; i < (int)pref.size(); i++) {
            cout << (pref[i - 1] ^ pref[i])
                 << (i + 1 == (int)pref.size() ? '
' : ' ');
        }
    }
 
    return 0;
}
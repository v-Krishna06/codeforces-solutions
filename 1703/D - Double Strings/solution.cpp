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
 
        vector<string> a(n);
        unordered_set<string> st;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st.insert(a[i]);
        }
 
        for (int i = 0; i < n; i++) {
            bool found = false;
            int len = a[i].size();
 
            for (int j = 1; j < len; j++) {
                string left = a[i].substr(0, j);
                string right = a[i].substr(j);
 
                if (st.count(left) && st.count(right)) {
                    found = true;
                    break;
                }
            }
 
            cout << (found ? '1' : '0');
        }
 
        cout << '
';
    }
 
    return 0;
}
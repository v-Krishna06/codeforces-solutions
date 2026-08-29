#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        map<int, vector<int>> mp;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }
 
        vector<int> b(n, 1);
 
        int cnt = 0;
 
        for (auto &it : mp) {
            if (it.second.size() >= 2) {
                if (cnt == 0) {
                    b[it.second[0]] = 1;
                    b[it.second[1]] = 2;
                    cnt++;
                }
                else if (cnt == 1) {
                    b[it.second[0]] = 1;
                    b[it.second[1]] = 3;
                    cnt++;
                    break;
                }
            }
        }
 
        if (cnt < 2) {
            cout << -1 << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }
 
    return 0;
}
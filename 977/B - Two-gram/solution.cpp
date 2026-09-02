#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    map<string, int> mp;
 
    for (int i = 0; i < n - 1; i++) {
        string pair = s.substr(i, 2);
        mp[pair]++;
    }
 
    string ans;
    int maxi = 0;
 
    for (auto it : mp) {
        if (it.second > maxi) {
            maxi = it.second;
            ans = it.first;
        }
    }
 
    cout << ans << '
';
 
    return 0;
}
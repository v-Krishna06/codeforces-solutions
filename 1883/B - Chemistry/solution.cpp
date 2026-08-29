#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int freq[26] = {0};
 
        for (char c : s) {
            freq[c - 'a']++;
        }
 
        int odd = 0;
 
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd++;
            }
        }
 
        if (odd <= k + 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        vector<string> a(8);
 
        for (int i = 0; i < 8; i++)
            cin >> a[i];
 
        bool red = false;
 
        for (int i = 0; i < 8; i++) {
            if (a[i] == "RRRRRRRR") {
                red = true;
                break;
            }
        }
 
        cout << (red ? 'R' : 'B') << '
';
    }
 
    return 0;
}
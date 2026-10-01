#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
 
    vector<int> a(n + 1);
    vector<int> pos(51, 0);
 
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
 
        if (pos[a[i]] == 0) {
            pos[a[i]] = i;
        }
    }
 
    while (q--) {
        int x;
        cin >> x;
 
        int p = pos[x];
 
        cout << p << " ";
 
        
        for (int c = 1; c <= 50; c++) {
            if (pos[c] < p) {
                pos[c]++;
            }
        }
 
        
        pos[x] = 1;
    }
 
    cout << '
';
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> parent(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> parent[i];
    }
 
    int ans = 0;
 
    for (int i = 1; i <= n; i++) {
        int cur = i;
        int depth = 1;
 
        while (parent[cur] != -1) {
            cur = parent[cur];
            depth++;
        }
 
        ans = max(ans, depth);
    }
 
    cout << ans << endl;
 
    return 0;
}
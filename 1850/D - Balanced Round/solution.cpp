#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        sort(a.begin(), a.end());
 
        int longest = 1;
        int current = 1;
 
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                current++;
            }
            else {
                current = 1;
            }
 
            longest = max(longest, current);
        }
 
        cout << n - longest << endl;
    }
 
    return 0;
}
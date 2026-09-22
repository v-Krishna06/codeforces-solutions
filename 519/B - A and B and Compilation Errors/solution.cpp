#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int ans1 = 0, ans2 = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans1 ^= x;
    }
 
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        ans1 ^= x;
        ans2 ^= x;
    }
 
    for (int i = 0; i < n - 2; i++) {
        int x;
        cin >> x;
        ans2 ^= x;
    }
 
    cout << ans1 << '
';
    cout << ans2 << '
';
 
    return 0;
}
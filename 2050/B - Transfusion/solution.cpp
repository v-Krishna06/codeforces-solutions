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
 
        long long odd = 0, even = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            if (i % 2 == 0) odd += x;
            else even += x;
        }
 
        long long oddCnt = (n + 1) / 2;
        long long evenCnt = n / 2;
 
        if (odd % oddCnt == 0 &&
            even % evenCnt == 0 &&
            odd / oddCnt == even / evenCnt) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}
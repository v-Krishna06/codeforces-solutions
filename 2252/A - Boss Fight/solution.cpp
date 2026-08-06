#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        map<int, int> freq;
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            freq[x]++;
        }
 
        int mx = 0;
        int val = 0;
 
        for (auto &[v, f] : freq) {
            if (f > mx) {
                mx = f;
                val = v;
            }
        }
 
        int other = n - mx;
 
        if (mx <= other + 1) {
            cout << sum << "
";
        } else {
            long long lost = 1LL * (mx - other - 2) * val;
            cout << sum - lost << "
";
        }
    }
 
    return 0;
}
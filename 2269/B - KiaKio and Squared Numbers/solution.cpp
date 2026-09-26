#include <bits/stdc++.h>
using namespace std;
 
long long nxt(long long x) {
    long long sum = 0;
 
    while (x > 0) {
        long long d = x % 10;
        sum += d * d;
        x /= 10;
    }
 
    return sum;
}
 
long long getKey(long long x) {
    for (int i = 0; i < 100; i++) {
        x = nxt(x);
    }
    return x;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<long long, long long> freq;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            freq[getKey(x)]++;
        }
 
        long long ans = 0;
 
        for (auto [x, cnt] : freq) {
            ans += cnt * (cnt - 1) / 2;
        }
 
        cout << ans << '
';
    }
}
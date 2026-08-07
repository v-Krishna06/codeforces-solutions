#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    const int MAX = 200001;
    vector<bool> prime(MAX + 1, true);
 
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        cout << (prime[n + 1] ? "YES" : "NO") << '
';
    }
 
    return 0;
}
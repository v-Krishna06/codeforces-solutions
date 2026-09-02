#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        for (int k = 2; k <= 30; k++) {
            long long sum = (1LL << k) - 1;
 
            if (n % sum == 0) {
                cout << n / sum << '
';
                break;
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        long long d = n;
 
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                d = i;
                break;
            }
        }
 
        long long a = n / d;
        long long b = n - a;
 
        cout << a << " " << b << '
';
    }
 
    return 0;
}
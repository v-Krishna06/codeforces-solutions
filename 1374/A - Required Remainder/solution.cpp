#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        long long x, y, n;
        cin >> x >> y >> n;
 
        long long k = n - (n % x - y + x) % x;
 
        cout << k << endl;
    }
 
    return 0;
}
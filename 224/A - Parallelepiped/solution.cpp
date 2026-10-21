#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x, y, z;
    cin >> x >> y >> z;
 
    int a = sqrt((double)x * z / y);
    int b = sqrt((double)x * y / z);
    int c = sqrt((double)y * z / x);
 
    cout << 4 * (a + b + c) << '
';
 
    return 0;
}
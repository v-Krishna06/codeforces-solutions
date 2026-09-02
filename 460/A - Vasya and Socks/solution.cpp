#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int days = 0;
 
    while (n > 0) {
        n--;
        days++;
 
        if (days % m == 0)
            n++;
    }
 
    cout << days << '
';
}
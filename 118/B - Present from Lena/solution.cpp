#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int i = 0; i <= 2 * n; i++) {
        int x = min(i, 2 * n - i);
 
        for (int j = 0; j < n - x; j++)
            cout << "  ";
 
        for (int j = 0; j <= x; j++) {
            if (j > 0) cout << " ";
            cout << j;
        }
 
        for (int j = x - 1; j >= 0; j--)
            cout << " " << j;
 
        cout << '
';
    }
 
    return 0;
}
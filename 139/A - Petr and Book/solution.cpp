#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int v[7];
 
    for (int i = 0; i < 7; i++) {
        cin >> v[i];
    }
 
    int i = 0;
 
    while (true) {
        n -= v[i];
 
        if (n <= 0) {
            cout << i + 1 << endl;
            break;
        }
 
        i = (i + 1) % 7;
    }
 
    return 0;
}
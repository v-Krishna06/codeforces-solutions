#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int five = 0;
    int fifty = 0;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
 
        if (x == 25) {
            five++;
        }
        else if (x == 50) {
            if (five == 0) {
                cout << "NO";
                return 0;
            }
 
            five--;
            fifty++;
        }
        else { // x == 100
            if (fifty > 0 && five > 0) {
                fifty--;
                five--;
            }
            else if (five >= 3) {
                five -= 3;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }
 
    cout << "YES";
 
    return 0;
}
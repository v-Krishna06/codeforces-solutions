#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n;
    cin >> n;
 
    int i = 0;
 
    while (i < n.size()) {
        if (n.substr(i, 3) == "144") {
            i += 3;
        }
        else if (n.substr(i, 2) == "14") {
            i += 2;
        }
        else if (n[i] == '1') {
            i++;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
    return 0;
}
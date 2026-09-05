#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int zero = 0, one = 0;
 
    for (char c : s) {
        if (c == '0')
            zero++;
        else
            one++;
    }
 
    cout << abs(zero - one) << endl;
 
    return 0;
}
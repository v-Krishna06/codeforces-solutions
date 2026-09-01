#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int zeros = count(s.begin(), s.end(), '0');
        int ones = s.size() - zeros;
 
        if (min(zeros, ones) % 2)
            cout << "DA
";
        else
            cout << "NET
";
    }
 
    return 0;
}
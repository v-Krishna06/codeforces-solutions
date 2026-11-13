#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int pos = s.find('0');
 
    if (pos != string::npos) {
        s.erase(pos, 1);
    } else {
        s.pop_back();
    }
 
    cout << s << '
';
 
    return 0;
}
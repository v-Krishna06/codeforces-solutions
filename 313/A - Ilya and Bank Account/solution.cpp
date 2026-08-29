#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n >= 0) {
        cout << n << endl;
    }
    else {
        int removeLast = n / 10;
 
        int removeSecondLast = (n / 100) * 10 + (n % 10);
 
        cout << max(removeLast, removeSecondLast) << endl;
    }
 
    return 0;
}
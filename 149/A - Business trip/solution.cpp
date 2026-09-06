#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k;
    cin >> k;
 
    vector<int> a(12);
    for (int &x : a)
        cin >> x;
 
    if (k == 0) {
        cout << 0;
        return 0;
    }
 
    sort(a.begin(), a.end());
 
    int sum = 0, cnt = 0;
 
    for (int i = 11; i >= 0; i--) {
        sum += a[i];
        cnt++;
 
        if (sum >= k)
            break;
    }
 
    cout << (sum >= k ? cnt : -1);
 
    return 0;
}
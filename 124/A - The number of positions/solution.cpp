#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int n, a, b;
    cin >> n >> a >> b;
 
    int left = max(a + 1, n - b);
    int right = n;
 
    cout << right - left + 1 << endl;
 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int o = 0, e = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x & 1) o++;
            else e++;
        }
 
        bool larpity = false;
        if (o % 2 == 1) {
            if ((o == 1 && e == 1) || (o == 3 && e == 0)) larpity = true;
        }
 
        cout << (larpity ? "Larpity" : "Moggity") << "
";
    }
    return 0;
}
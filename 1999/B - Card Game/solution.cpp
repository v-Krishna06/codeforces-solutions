#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
 
        int aOrders[2][2] = {{a1, a2}, {a2, a1}};
        int bOrders[2][2] = {{b1, b2}, {b2, b1}};
 
        int count = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int ax = aOrders[i][0], ay = aOrders[i][1];
                int bx = bOrders[j][0], by = bOrders[j][1];
 
                int s = 0, sl = 0;
                if (ax > bx) s++;
                else if (ax < bx) sl++;
                if (ay > by) s++;
                else if (ay < by) sl++;
 
                if (s > sl) count++;
            }
        }
        cout << count << "
";
    }
    return 0;
}
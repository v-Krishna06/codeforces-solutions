#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long a, b;
        cin >> a >> b;
 
        long long xk, yk;
        cin >> xk >> yk;
 
        long long xq, yq;
        cin >> xq >> yq;
 
        // 8 possible positions of the knight relative to a piece
        vector<pair<long long, long long>> moves = {
            { a,  b},
            { a, -b},
            {-a,  b},
            {-a, -b},
            { b,  a},
            { b, -a},
            {-b,  a},
            {-b, -a}
        };
 
        set<pair<long long, long long>> king, queen;
 
        // Positions from which knight can attack the king
        for (auto [dx, dy] : moves) {
            king.insert({xk + dx, yk + dy});
        }
 
        // Positions from which knight can attack the queen
        for (auto [dx, dy] : moves) {
            queen.insert({xq + dx, yq + dy});
        }
 
        // Count common positions
        int ans = 0;
 
        for (auto pos : king) {
            if (queen.count(pos)) {
                ans++;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}
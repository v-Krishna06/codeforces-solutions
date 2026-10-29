#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    long long x;
    cin >> n >> x;
 
    vector<vector<long long>> a(3, vector<long long>(n));
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
 
    long long knowledge = 0;
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if ((a[i][j] | x) != x)
                break;
 
            knowledge |= a[i][j];
        }
    }
 
    cout << (knowledge == x ? "Yes" : "No") << '
';
    }
}
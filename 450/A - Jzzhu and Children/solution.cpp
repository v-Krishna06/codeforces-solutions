#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        int ans = 0;
        int mxTurns = 0;
        for(int i = 1;i<=n;i++){
            int x;
            cin>>x;
            int t = (x+m-1)/m;
            if(t>=mxTurns){
                mxTurns = t;
                ans = i;
            }
        }
        cout<<ans<<endl;
 
   
 
    return 0;
}
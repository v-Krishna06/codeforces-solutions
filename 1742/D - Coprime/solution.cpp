#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        unordered_map<int,int>mp;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            mp[x]=i+1;
        }
        int ans = -1;
        for(auto &[x,i1]:mp){
            for(auto&[y,i2]:mp){
                if(gcd(x,y)==1){
                    ans = max(ans,i1+i2);
                }
            }
        }
        cout<<ans<<endl;
        
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> v1(n),v2(n);
        
        for (int &x : v1) cin >> x;
        for (int &x : v2) cin >> x;
        map<int,int> ma,mb;
 
        for(int i =0;i<n;i++){
            int j = i;
            while(j<n && v1[i]==v1[j]){
                j++;
            }
            ma[v1[i]]=max(ma[v1[i]],j-i);
            i=j-1;
        }
 
        for(int i =0;i<n;i++){
            int j = i;
            while(j<n && v2[i]==v2[j]){
                j++;
            }
            mb[v2[i]]=max(mb[v2[i]],j-i);
            i=j-1;
        }
        int ans = 0;
        for(auto [x,len]:ma){
            ans = max(ans,len+mb[x]);
        }
        for(auto [x,len]:mb){
            ans = max(ans,len);
        }
        cout<<ans<<endl;
    }
    return 0;
}
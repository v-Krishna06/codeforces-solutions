#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;
    unordered_map<string,string>mp;
    for(int i = 0;i<m;i++){
        string a,b;
        cin>>a>>b;
        if(a.size()<=b.size()){
            mp[a]=a;
        }
        else{
            mp[a]=b;
        }
    }
    for(int i = 0;i<n;i++){
        string x;
        cin>>x;
        cout<<mp[x];
        if(i<n-1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}
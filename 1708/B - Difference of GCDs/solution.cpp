#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int>a(n+1,0);
        bool p = true;
        for(int i = 1;i<=n;i++){
            long long x = ((l+i-1)/i)*i;
            if(x>r){
                p = false;
                break;
            }
            a[i]=x;
        }
        if(p){
            cout<<"YES"<<endl;
            for(int i = 1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
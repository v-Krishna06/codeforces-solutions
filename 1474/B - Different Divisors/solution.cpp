#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
        if(n<2){
            return false;
        }
        for(int i =2;i<n;i++){
            if(n%i==0){
                return false;
            }
            
        }
        return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int p = d+1;
        while(!prime(p)){
            p++;
        }
        int q = p+d;
        while(!prime(q)){
            q++;
        }
        cout<<1LL*p*q<<endl;
 
    }
 
    return 0;
}
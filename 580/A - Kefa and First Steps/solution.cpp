#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int i = 1;
    int ans = 1;
    for(int j = 1;j<n;j++){
        if(a[j-1]<=a[j]){
            i++;
        }
        else{ 
            i = 1;
        }
        ans = max(ans,i);
    }
    cout<<ans<<endl;
 
 
    return 0;
}
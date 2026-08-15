#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i = 0;i<n;i++){
        cin>>a[i];
      }
      vector<int>p(n);
      int i =0;
      bool poss = true;
      while(i<n){
        int j=i;
        while(j<n && a[j]==a[i]){
            j++;
        }
        if(j-i==1){
            poss=false;
            break;
        }
        for(int k = i;k<j-1;k++){
            p[k]=k+2;
        }
        p[j-1]=i+1;
        i=j;
      }
      if(poss){
        for(int x:p){
            cout<<x<<" ";
        }
        cout<<endl;
      }
      else{
        cout<<-1<<endl;
      }
 
    }
 
    return 0;
}
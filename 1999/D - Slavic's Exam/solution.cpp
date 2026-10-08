#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
 
        string s,t;
        cin>>s>>t;
        
        int i = 0,j = 0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                
                j++;
            }
            else if(s[i]=='?'){
                s[i]=t[j];
                j++;
            }
            i++;
        }
        if(t.size()==j){
            for (int k = 0; k < s.size(); k++) {
                if (s[k] == '?') {
                    s[k] = 'a';
                }
            }
            cout << "YES" << endl;
            cout << s << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
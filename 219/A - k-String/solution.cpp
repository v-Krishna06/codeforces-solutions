#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int freq[26] = {0};
    for(int i = 0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    for(int i = 0;i<26;i++){
        if(freq[i]%k !=0){
            cout<<-1<<endl;
            return 0;
        }
    }
    string p = "";
    for(int i = 0;i<26;i++){
        p+=string(freq[i]/k,'a'+i);
        
    }
    for(int i = 0;i<k;i++){
        cout << p;
    }
    cout << endl;
 
    return 0;
}
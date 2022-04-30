#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string str1, str2;cin >> str1 >> str2;
        string ans;
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                ans.append("1");
            }else{
                ans.append("0");
            }
        }
        cout << ans << endl;
    }
}
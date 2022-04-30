#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin >> s;
    stack<char> st;
    int count = 0;
    string ans;
    for(int i = 0; i < s.length();i++){
        if(st.empty()){
            cout<<"Stack Empty";
            st.push(s[i]);
            ans = ans + s[i];
            count=1;
        } else if(!st.empty() && s[i] == st.top()){
            count++;
        }else{
            ans = ans + to_string(count);
            st.pop();
            count=0;
        }
    }
    cout << ans << endl;
}
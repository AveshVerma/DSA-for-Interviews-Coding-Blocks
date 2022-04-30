#include<bits/stdc++.h>
using namespace std;

int strToInt(string s, int len){
    if(len == 0){
        return 0;
    }

    int d = s[len-1] - '0';
    int small = strToInt(s, len-1);
    return small*10 + d;
}
int main(){
    string s;
    cin >> s;
    int len = s.length();
    int ans = strToInt(s, len);
    cout << ans << endl; 
}
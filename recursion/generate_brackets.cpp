#include<bits/stdc++.h>
using namespace std;
vector<string> v;

void generateBrackets(char*out, int n, int idx, int open, int close){
    if(idx == 2*n){
        out[idx] = '\0';
        v.push_back(out);
        //out << out << endl;
        return;
    }
    if(open < n){
        char ch = '(';
        out[idx] = ch;
        generateBrackets(out,n,idx+1,open+1, close);
    }
    if(close < open){
        char ch = ')';
        out[idx] = ch;
        generateBrackets(out, n, idx+1, open, close+1);
    }
    return;
}

int main(){
    int n; cin >> n;
    char out[1000];
    generateBrackets(out, n, 0,0,0);
    for(int i = v.size()-1; i >= 0; i--){
        cout << v[i] << endl;
    }
}
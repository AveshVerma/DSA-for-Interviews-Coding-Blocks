#include<bits/stdc++.h>
using namespace std;

void dupFormat(char s[], int i){
    if(s[i] == '\0'){
        return;
    }
    if(s[i] == s[i+1]){
        int j = i+1;
        while(s[j]!='\0'){
            j++;
        }
        while(j>=i+1){
            s[j+1] = s[j];
            j--;
        }
        s[i+1] = '*';
        dupFormat(s, i+2);
    }else{
        dupFormat(s, i+1);
    }
}

int main(){
    char s[1000];
    cin >> s;
    dupFormat(s,0);
    cout << s << endl;
}
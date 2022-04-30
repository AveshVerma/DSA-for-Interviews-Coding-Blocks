#include<bits/stdc++.h>
using namespace std;

void moveAtEnd(char *s, int i, int len){
    if(i>=len){
        return;
    }
    char x = s[i];
    if(x!='x'){
        cout << x;
    }

    moveAtEnd(s, i+1, len);
    if(x == 'x'){
        cout << x;
    }
    return;
}

int main(){
    char s[1000];
    cin >> s;
    int len = strlen(s);
    moveAtEnd(s, 0, len);
}
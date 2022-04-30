#include<bits/stdc++.h>
using namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz"};

void generateNames(char * in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] == '\0';
        cout << out << endl;
        return;
    }
    int d = in[i] - '0';
    for(int k = 0; keypad[d][k]!='\0';k++){
        out[j] = keypad[d][k];
        generateNames(in, out, i+1, j+1);
    }
    return;
}


int main(){
    char in[1000];
    char out[1000] = {0};
    cin >> in;
    generateNames(in, out, 0, 0);
}
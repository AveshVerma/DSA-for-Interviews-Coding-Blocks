#include<bits/stdc++.h>
using namespace std;


void generateString(char * in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] == '\0';
        cout << out << endl;
        return;
    }
    int d = in[i] - '0';
    char ch = d + 'A' - 1;
    out[j] = ch;
    generateString(in, out, i+1, j+1);
    // two number at a time
    int secondDigit = in[i+1] - '0';
    int num = 10*d + secondDigit;
    if(num < 26){
        char ch = num + 'A' -1;
        out[j] = ch;
        generateString(in, out, i+2,j+1);
    }
    return;
}


int main(){
    char in[1000];
    char out[1000];
    cin >> in;
    generateString(in, out, 0, 0);
}
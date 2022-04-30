#include<bits/stdc++.h>
using namespace std;

char keypad[][10] = {" ","abc", "def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

void keypadCodes(char * in, char *out,int i, int j, int &ans){
    if(in[i] == '\0'){
        ans++;
        out[j] = '\0';
        cout << out << " ";
        return;
    }
    int d = in[i] - '0';
    for(int k = 0; keypad[d][k]!='\0';k++){
        out[j] = keypad[d][k];
        keypadCodes(in, out, i+1, j+1, ans);

    }

}

int main(){
    char in[1000];
    cin >> in;
    char out[1000];
    int ans = 0;
    keypadCodes(in, out,0, 0, ans);
    cout << endl;
    cout << ans;
}
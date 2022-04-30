#include<bits/stdc++.h>
using namespace std;

int main(){

    char a[1000][1000];
    int m,n; cin >> m >> n;
    int k,s; cin >> k >> s;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }
    for(int row=0; row<m; row++){
        for(int col=0; col<n;col++){
            char ch = a[row][col];
            if(s<k){
                break;
            }
            else if(ch == '.'){
                s-=2;
            }
            else if(ch == '*'){
                s+=5;
            }
            else if(ch == '#'){
                break;
            }
            if(col!=n-1){
                s--;
            }
        }
    }
    if(s>=k){
        cout << "Yes" << endl;
        cout << s << endl;
    } else {
        cout << "No";
    }
}
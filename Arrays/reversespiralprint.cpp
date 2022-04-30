#include<bits/stdc++.h>
using namespace std;

void spiralprint(int a[][1000], int m, int n){
    int sr = 0;
    int sc = 0;
    int er = m-1;
    int ec = n-1;

    while(sr <= er && sc <= ec){
        for(int i = sr; i <= er;i++){
            cout << a[i][sc] << ", ";
        }
        sc++; 
        for(int i = sc; i <= ec;i++){
            cout << a[er][i] << ", ";
        }
        er--;
        if(er > sr){ // repition at middle most elements
        for(int i = er; i >= sr ;i--){
            cout << a[i][ec] << ", ";
        }
        ec--;
        }
        if(ec > sc){ // repition at middle most elements
        for(int i = ec; i >= sc ;i--){
            cout << a[sr][i] << ", ";
        }
        sr++;
        }
    }
    cout << "END" << endl;
}

int main(){

    int a[1000][1000]={0};
    int m,n; cin >> m >> n;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }

    spiralprint(a,m,n);
}
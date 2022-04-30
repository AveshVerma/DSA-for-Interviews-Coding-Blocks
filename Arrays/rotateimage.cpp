#include<bits/stdc++.h>
using namespace std;

void rotateimage(int a[][1000], int n){

    //reverse each row
    for(int row=0;row<n;row++){
        int sc = 0;
        int ec = n-1;
        while(sc < ec){
            swap(a[row][sc], a[row][ec]);
            sc++;
            ec--;
        }
    }
    //transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
            swap(a[i][j], a[j][i]);
            }
        }
    }

}

int main(){

    int a[1000][1000]={0};
    int n; cin >> n;
    for(int row = 0;row<=n-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }

    rotateimage(a,n);

    for(int row = 0;row<=n-1;row++){
        for(int col=0;col<=n-1;col++){
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}
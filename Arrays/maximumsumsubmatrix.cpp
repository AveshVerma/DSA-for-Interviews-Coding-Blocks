#include<bits/stdc++.h>
using namespace std;

int maxSumSubmatrix(int a[][1000], int m, int n){
    for(int i = m-1; i >=0; i--){
        for(int j = n-2; j >=0; j--){
            a[i][j]+= a[i][j+1];
        }
    }
    for(int i = n-1; i>=0;i--){
        for(int j=m-2;j>=0;j--){
            a[j][i]+= a[j+1][i];
        }
    }
    int res = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res = max(res, a[i][j]);
        }
    }
    return res;
}

int main(){

    int a[1000][1000]={0};
    int m,n; cin >> m >> n;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }
    cout << maxSumSubmatrix(a,m,n);
}
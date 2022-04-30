#include<bits/stdc++.h>
using namespace std;

int sumOfSubmatrix(int arr[][1000], int n, int m){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tl = (i+1)*(j+1);
            int br = (n-i)*(m-j);
            sum+= (tl*br)*arr[i][j];
        }
    }
    return sum;
}


int main(){

    int a[1000][1000]={0};
    int m,n; cin >> m >> n;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }
        cout << sumOfSubmatrix(a,n,m) << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[1000][1000]={0};
    int m,n; cin >> m >> n;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }
    for(int col = 0;col<=n-1;col++){
        if(col%2 == 0){ // top down 
            for(int row = 0; row<m; row++){
                cout << a[row][col] << ", ";
            }
        } else {
            for(int row =m-1;row>=0;row--){
                cout << a[row][col] << ", ";
            }
        }
    }
    cout << "END" <<endl;
}

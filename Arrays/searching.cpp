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
    int key;cin>>key;
    int ans = 0;
    for(int row = 0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            if(a[row][col] == key){
                ans=1;
            }
        }
    }
    cout << ans << endl;

}
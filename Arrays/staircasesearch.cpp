#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[1000][1000]={0};
    int n; cin >> n;
    for(int row = 0;row<=n-1;row++){
        for(int col=0;col<=n-1;col++){
            cin >> a[row][col];
        }
    }
    int key;cout << "What do you want to search: "; cin >> key;
    int min = a[0][0];
    int max = a[n-1][n-1];
    if(key <min || key > max){
        cout <<"not found";
    }
    int p1=0;int p2=n-1;
    while(p1<n && p2 >=0){
        if(a[p1][p2] == key){
            cout<< "key found:" << p1 <<"," << p2 << endl;
        }
        if(a[p1][p2] > key){
            p2--;
        } else {
            p1++;
        }
    }
}
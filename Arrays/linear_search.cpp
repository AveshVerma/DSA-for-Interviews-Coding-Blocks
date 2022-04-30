#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, key;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "enter the value you want to search:";
    cin >> key;
    int i = 0;
    for(i = 0; i < n; i++){
        if(a[i] == key){
            cout << key << "is present at index:" << i << endl;
            break;
        } 
    }
    if(i==n){
            cout << "value not present" << endl;
}
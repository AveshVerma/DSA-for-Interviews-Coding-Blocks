#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int zero=0;
    int one=0;
    int two=0;
    for(int i = 0; i < n; i++){
        if(arr[i] ==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }
    while(zero--){
        cout << "0" << endl;
    }
    while(one--){
        cout << "1" << endl;
    }
    while(two--){
        cout << "2" << endl;
    }
}
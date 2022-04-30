#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int q; cin >> q;
    while(q--){
        int key; cin >> key;
        int* lower = lower_bound(arr, arr+n, key);
        int* upper = upper_bound(arr, arr+n, key);
        cout << &lower << " "<< &upper << endl;

    }
}
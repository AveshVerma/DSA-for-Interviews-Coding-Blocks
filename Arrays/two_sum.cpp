#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target; cin >> target;
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int* idx2 = find(arr, arr+n, target-temp);
        if(idx2){
            cout << i+1 << " " << idx2-arr+1 << endl;
            break;
        }
    }
}
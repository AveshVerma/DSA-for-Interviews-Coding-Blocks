#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int ind = i+1;
        int max_ele = arr[i];
        for(int j = ind; j < n+ind; j++){
            if(arr[j%n] > max_ele){
                cout << arr[j%n] << " ";
                break;
            }else if(max_ele == arr[j%n]){
                cout << -1 << " ";
                break;
            }
        }
    }


}


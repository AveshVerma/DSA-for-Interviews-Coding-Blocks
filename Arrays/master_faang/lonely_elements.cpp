#include<bits/stdc++.h>
using namespace std;


bool isLonely(int arr[], int mid, int n){
    if(mid == 0 && arr[0]!=arr[1]){
        return true;
    }
    if(mid == n-1 && arr[mid] != arr[mid-1]){
        return true;
    }
    if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1]){
        return true;
    }
    return false;
}

int lonelyElement(int arr[], int n){
    if(n == 1){
        return arr[0];
    }
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if((isLonely(arr, mid, n))){
            return arr[mid];
        }
        if(mid+1 < n && arr[mid] == arr[mid+1]){
            if(mid%2 == 0){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        if(mid>=1 && arr[mid] == arr[mid-1]){
            if(mid%2 == 1){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }  
    }
    return arr[s];
}

int main(){
    int n;
     cin >> n;
     int arr[n];
     for(int i = 0; i < n; i++){
         cin >> arr[i];
     }
     int ans = lonelyElement(arr, n);
     cout << ans << endl;

     
}
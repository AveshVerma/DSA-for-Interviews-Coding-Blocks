#include<bits/stdc++.h>
using namespace std;

int merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = (mid+1);
    int k = s;

    int temp[100000];
    int cnt = 0;
    
    while(i <= mid && j<=e){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        } else{
            temp[k++] = arr[j++];
            cnt = cnt + mid-i+1;
        }
    }

    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }

    for(int i = s; i <= e; i++){
        arr[i] = temp[i];
    }

    return cnt;
}

int inversionCount(int* arr, int s, int e){
    if(s>=e){
        return 0;
    }

    int mid = (s+e)/2;
    int x = inversionCount(arr, s, mid);
    int y = inversionCount(arr, mid+1, e);

    int z = merge(arr,s,e);
    return x+y+z;
}

int main(){
    int t; cin >> t;
    while(t--){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << inversionCount(arr, 0, n-1) << endl;
    }
}
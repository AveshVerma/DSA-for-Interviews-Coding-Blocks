#include<bits/stdc++.h>
using namespace std;

long long int binarySearch(long long int arr[],long long int n, long long int key){
    long long int s = 0;
    long long int e = n-1;
    while(s<=e){
        long long int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return 0;
}

int main(){
    long long int n; cin >> n;
    long long int arr[n];
    for(long long int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long int key; cin >> key;
    cout << binarySearch(arr, n, key);
}
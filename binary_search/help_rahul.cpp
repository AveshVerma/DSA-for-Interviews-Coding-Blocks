#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }
        if(arr[start] < arr[mid]){
            if(arr[start] < key and arr[mid] > key){
                end = mid-1;
            }  else{
                start = mid+1;
            }
        } else{
            if(arr[mid] < key and arr[end] >= key){
                start = mid+1;
            } else{
                end = mid-1;

            }
        }
    }
    return -1;
}

int main(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key; cin>>key;
    cout << binarySearch(arr, 0, n-1, key) << endl;
}
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int curr_min){
    int studentUsed =1;
    int pages_reading = 0;
    for(int i = 0; i<n;i++){
        if(pages_reading + arr[i] > curr_min){
            studentUsed++;
            pages_reading = arr[i];
            if(studentUsed > m){
                return false;
            }
        } else{
            pages_reading+= arr[i];
        }
    }
    return true;
}

int findPages(int arr[], int n, int m){
    int sum = 0;
    //if n<m return -1
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s =arr[n-1];
    int e = sum;
    int ans = INT_MAX;

    while(s<=e){
        int mid = (s+e)/2;
        if(isPossible(arr, n, m, mid)){
            ans = min(ans, mid);
            e = mid-1;
        } else{
            s = mid+1;
        }
    }
    return ans;
}

int  main(){
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << findPages(arr, n, m) << endl;
    }
}
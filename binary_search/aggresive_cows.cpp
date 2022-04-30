#include<bits/stdc++.h>
using namespace std;

bool canPlaceCowsHelper(int stalls[], int n, int c, int min_sep){
    int last_cow = stalls[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(stalls[i] - last_cow>=min_sep){
            last_cow = stalls[i];
            cnt++;
            if(cnt==c){
                return true;
            }
        }
    }
    if(cnt < c){
        return false;
    }
    return true;


}

int  main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int c; cin >> c;
    int arr[n];
     for(int i = 0; i < n; i++){
         cin >> arr[n];
     }
     sort(arr, arr+n);
     int s=0;
     int e=arr[n-1] - arr[0];
     int ans=0;
     while(s<=e){
         int mid = (s+e)/2;
         bool canPlaceCows = canPlaceCowsHelper(arr, n, c, mid);
         if(canPlaceCows){
             ans = mid;
             s = mid+1;
         } else{
             e = mid-1;
         }
     }
    cout << ans << endl;
    }
}
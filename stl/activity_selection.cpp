#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;cin >> n;
        int a, b;
        pair<int, int> arr[n];
        for(int i  = 0; i < n; i++){
            cin >> a >> b;
            arr[i] = make_pair(a,b);
        }
        sort(arr, arr+n, cmp);
        int curr=0;
        int ans=1;
        for(int i=1;i<n;i++){
            if(arr[i].first >= arr[curr].second){
                ans++;
                curr=i;
            }
        }
        cout << ans << endl;
    }   
}
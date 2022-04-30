#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >>a[i];
        }
        int max_height = a[0];
        int ans = 1;
        for(int i = 1; i<n; i++){
            if(a[i] >= max_height){
                ans++;
                max_height = max(max_height, a[i]);
            }
        }
        cout << ans << endl;
    }
}
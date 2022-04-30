#include<bits/stdc++.h>
using namespace std;

long long tilingProblem(int n, int m){
    long long count[n+1];
    count[0] = count[1] = 1;
    for(int i = 2; i <=n; i++){
        if(i>=m){
            count[i] = (count[i-1] + count[i-m])%1000000007;
        }
        else{
            count[i] = count[i-1];
        }
    }
    return count[n];
}

int main(){
    int t;cin >>t;
    while(t--){
        int n,m; cin >> n >> m;
        int ans = (tilingProblem(n,m));
        cout << ans << endl;
    }
}
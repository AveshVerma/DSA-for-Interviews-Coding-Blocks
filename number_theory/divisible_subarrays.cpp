#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll a[1000005], pre[100005];

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        memset(pre, 0, sizeof(pre));

        pre[0] = 1;
        int sum = 0;
        for(int i  = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];
            sum%=n;
            sum = (sum+n)%n;
            pre[sum]++;
        }

        ll ans = 0;
        for(int i = 0; i < n; i++){
            ans+= pre[i]*(pre[i]-1)/2;
        }
        cout << ans << endl;
    }
}
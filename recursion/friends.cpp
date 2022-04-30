#include<bits/stdc++.h>
using namespace std;

int friends(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    int ans = 0;
    ans += friends(n-1) + (n-1)*friends(n-2);

    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = friends(n);
    cout << ans << endl;
}
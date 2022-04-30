#include<bits/stdc++.h>
using namespace std;

 int countSetBits( int n)
{
    int count = 0;
    while (n>0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main(){
    int q;cin >> q;
    while(q--){
        int a;cin >> a;
        int b; cin >> b;
        int ans = 0;
        for(int i = a; i <=b; i++){
            ans+= countSetBits(i);
        }
        cout << ans << endl;
    }
}
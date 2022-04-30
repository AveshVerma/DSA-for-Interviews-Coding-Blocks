#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;cin >> n;
     int cnt[64] = {0};
     int no;
     for(int i = 0; i < n; i++){
         cin >> no;
         // update count array by extracting bits
         int j=0;
         while(no>0){
             int last_bit = (no&1);
             cnt[j]+= last_bit;
             j++;
             no = no>>1;
         }         
     }
     int pow = 1;
     int ans = 0;
     for(int i=0;i<64;i++){
         cnt[i] %= 3;
         ans+= (cnt[i]*pow);
         pow = pow<<1;
     }
     cout << ans << endl;   
}
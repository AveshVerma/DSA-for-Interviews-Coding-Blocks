#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    } else{
        return gcd(b, a%b);
    }
}

int lcm(int gcd, int a, int b){
    return (a*b)/gcd;
}

int main(){
    int a;cin >> a;
    int b;cin >> b;
    int ans = gcd(a,b);
    cout << ans << endl;
    int lcm_ans = lcm(ans , a, b);
    cout << ans << endl;
}
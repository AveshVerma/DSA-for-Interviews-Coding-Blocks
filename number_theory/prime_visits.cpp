#include<bits/stdc++.h>
using namespace std;

void primeSieve(int* p){
    p[2] = 1;
    p[1] = p[0] = 0;
    for(int i = 3; i <= 1000000;i+=2){
    p[i]=1;
    }
    //sieve
    for(long long int i = 3; i <=1000000; i+=2){
        if(p[i] == 1){
            for(long long int j = i*i; j<=1000000; j=j+i){
                p[j] = 0;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    int p[1000005] = {0};
    primeSieve(p);
    int csum[1000005] = {0};
    for(int i = 1; i <= 1000000; i++){
        csum[i] = csum[i-1] + p[i];
    }
    while(t--){
        int a; cin >> a;
        int b; cin >> b;
        cout << csum[b] - csum[a-1] << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

void primeSieve(int* p){
    //create array of primes upto n
// mark 1 as prime
// mark 2 as non prime
//mark multiples of 2 as not prime
// mark multiples of 3 as not prime
// mark multiplees of 5 as non prime
// cancel out all elements that are marked non prime
    //odd numbers prime
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
    int n; cin >> n;
    int p[1000005] = {0};
    primeSieve(p);
    for(int i = 0; i <= n; i++){
        if(p[i] == 1){
            cout << i << " ";
        }
    }
}
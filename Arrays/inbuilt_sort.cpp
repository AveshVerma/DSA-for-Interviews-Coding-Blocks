#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b){
    return a > b;
}

int main(){
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    sort(a, a+n, comparator);
    for(int i = 0; i < n; i++){cout << a[i] << " ";}
    
}
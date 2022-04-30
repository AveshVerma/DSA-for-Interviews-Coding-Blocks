#include<bits/stdc++.h>
using namespace std;

int knapsack(int *price, int * weight, int n, int c){
    if(n==0 || c==0){
        return 0;
    }
    int inc, exc;
    inc = exc = INT_MIN;
    int ans = 0;
    if(weight[n-1] <= c){
        inc = price[n-1] + knapsack(price, weight, n-1, c - weight[n-1]);
    }
    exc = knapsack(price, weight, n-1, c);
    ans = max(inc, exc);
}

int main(){
    int n;
    cin >> n;
    int weight[n];
    for(int i = 0; i < n; i++){
        cin >> weight[i];
    }
    int price[n];
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    int capacity; cin >> capacity;
    int ans = knapsack(price, weight, n, capacity);
    cout << ans << endl;
}
#include<bits/stdc++.h>
using namespace std;

void stockSpan(int prices[], int n, int span[]){
    stack<int> s;
    s.push(0);
    span[0] = 1 ;
    for(int i = 1; i <= n-1; i++){
        int curr = prices[i];

        while(!s.empty() && prices[s.top()] <= curr){
            s.pop();
        }
        if(!s.empty()){
            int prev = s.top();
            span[i] = i-prev;
        } else{
            span[i] = i+1;
        }
        s.push(i);
    }
}

int main(){
    int n;cin >> n;
    int prices[n];
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
    int span[n];
    stockSpan(prices, n, span);
    for(auto i: span){
        cout << i << " ";
    }
    cout << "END";
}
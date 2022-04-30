#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int> candyType){
    set<int> s;
    for(auto i:candyType){
        s.insert(i);
    }
    return min(candyType.size()/2, s.size());
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;cin >> x;
        v.push_back(x);
    }
    cout << distributeCandies(v);
}
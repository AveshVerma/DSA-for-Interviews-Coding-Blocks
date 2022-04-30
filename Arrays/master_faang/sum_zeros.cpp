#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    int range = n/2;
    if(n%2==0){
        for(int i = -range; i <= range; i++){
            if(i!=0){
                v.push_back(i);
            }
        }
    } else{
        for(int i = -range; i <= range; i++){
            v.push_back(i);
        }
    }
    for(int i:v){
        cout << i << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char buffer, char dest){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1, src, dest, buffer);
    cout << "Moving ring " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n-1, buffer, src, dest);
}

int main(){
    int n;
     cin >> n;
     towerOfHanoi(n,'A','C','B');
}
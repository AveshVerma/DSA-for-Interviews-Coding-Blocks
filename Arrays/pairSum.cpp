#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    int sum; cout << "Enter the Sum:" << endl; cin >> sum;

    int p1 = 0;
    int p2 = n-1;

    while(p1 < p2){
        if(a[p1] + a[p2] == sum){
            cout << a[p1] << "," << a[p2] << endl;
            p1++;
            p2--;
        } else if((a[p1] + a[p2]) > sum){
            p2--;
        } else{
            p1++;
        }
    }
    
}
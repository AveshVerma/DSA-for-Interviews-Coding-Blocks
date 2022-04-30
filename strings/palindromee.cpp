#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ptr1 = 0;
    int ptr2 = n-1;
    bool ans = false;
    while(ptr1<ptr2){
        if(a[ptr1] == a[ptr2]){
            ans = true;
            ptr1++;
            ptr2--;
        } else{
            ans = false;
            break;
        }
    }
    cout << ans << endl;
}
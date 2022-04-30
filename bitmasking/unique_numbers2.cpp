#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int no;
    int a[n];
    int xor_num=0;
    for(int i = 0; i < n; i++){
        cin >> no;
        a[i] = no;
        xor_num = xor_num ^ no;
    }
    int  temp = xor_num;
    int pos=0;
    while((temp&1) != 1){
        pos++;
        temp = temp >> 1;
    }
    int x = 0;
    int y = 0;
    int mask = (1 << pos);
    for(int i = 0; i < n; i++){
        if((a[i]&mask) > 0){
            x = x^ a[i];
        }
    }
    y = xor_num^x;
    cout << min(x,y) << " " << max(x,y);
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x0,y0,x1,y1;
    cin >> x0 >> y0 >> x1 >> y1;

    int a0,b0,a1,b1;
    cin >> a0 >> b0 >> a1 >> b1;

    bool c1 = x1 <= a0; // check if left
    bool c2 = y0 >= b1; // check if up
    bool c3 = x0 >= a1; // check if right
    bool c4 = b0 > y1; // check if botto

    if(c1 || c2 || c3 || c4){
        cout << 0 << endl;
    } else{
        cout << 1 << endl;
    }

}
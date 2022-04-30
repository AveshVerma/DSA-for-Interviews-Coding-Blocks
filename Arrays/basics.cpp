#include<bits/stdc++.h>
using namespace std;

int main(){
    // init of an array
    int a[10] = {0};

    // size of array, number of elements
    cout << sizeof(a) << endl;
    int n =  sizeof(a)/sizeof(int);
    cout << n;

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 10; i++){
        cout << a[i] << ",";
    }
}
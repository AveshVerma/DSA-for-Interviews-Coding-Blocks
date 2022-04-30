#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin >> a;
    int intOfA = int(a);
    if(intOfA >= 65 && intOfA <= 90){
        cout << "UPPERCASE" << endl;
    }else if(intOfA >=97 && intOfA <=122){
        cout << "lowercase" << endl;
    }else{
        cout << "Invalid" << endl;
    }
}
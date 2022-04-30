#include<bits/stdc++.h>
using namespace std;

int main(){
    int a_int[10] = {1,2,3};
    //cout << a_int << endl; // gives address of array -> default behaviour
    char a[10] = {'a','b','c'};
    //cout << a << endl; // gives contents of array
    
    // INPUT
    // char in[10];
    // cin >> in;
    //cout << in;
    //cout << (sizeof(in)/sizeof(char)) << endl;

    char s1[6] = {'h','e','l','l','o'}; // does not terminate with a null,  add "\0" at the end for correct way
    char s2[] = "hello"; // correct way

    cout << s1 << " " << sizeof(s1) << endl;
    cout << s2 << " " << sizeof(s2) << endl;
    
}
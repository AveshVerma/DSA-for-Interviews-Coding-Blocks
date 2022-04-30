#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int start=0,end=0;
    int i=0;
    while(i<str.size())
    {
    if(isupper(str[i]))
    {
    start=i;
    cout<<str[i];
    i++;
    while(islower(str[i]))
    {
    cout<<str[i];
    i++;
    }
    cout<<endl;
    }
    }
}
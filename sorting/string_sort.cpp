#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;


bool compare(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    if(n1>n2){
        for(int i=0;i<n1;i++){
            if(s1[i]!=s2[i]){
                return s1<s2;
            }
            return s1>s2;
        }
    }
    else if(n1<n2){
        for(int i=0;i<n2;i++){
            if(s2[i]!=s1[i]){
                return s1<s2;
            }
            return s1<s2;
        }
    }
    return 0;
}
int main() {
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    sort(a,a+n,compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}

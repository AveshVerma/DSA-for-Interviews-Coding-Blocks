#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int length = n;
    for (int index = 0; index < n; index++) {        
        int start = arr[index];
        int end = arr[--length];        
        if (length < index) {
            return true;
        }

        if (start != end) {
            return false;
        }
    }
return true;
}


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(isPalindrome(a,n)){
        cout << "true";
    } else cout << "false";
}
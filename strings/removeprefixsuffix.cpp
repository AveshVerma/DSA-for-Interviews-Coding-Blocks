#include<bits/stdc++.h>
using namespace std;
    
int minimumLength(string s) {
    int start = 0;
    int end = s.length()-1;
    char prev = '0';
    while(start<end){
        if(s[start]==s[end]){
            prev = s[start];
            start++;
            end--;
        }
        else if(s[start]==prev)
        {
            start++;
        }
        else if(s[end]==prev){
            end--;
    }
        else{
            break;
        }
    }
    if(start==end){
        if(s[start]==prev)
        return 0;
        }
    return end-start+1;
}

    

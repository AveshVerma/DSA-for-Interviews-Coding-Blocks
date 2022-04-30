#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch[100];
    cin >> ch;
    int n = strlen(ch);
    int curr = 1;
    int max_len = 1;
    int visited[256];

    for(int i = 0; i < 256; i++){
        visited[i] = -1;
    }
    visited[ch[0]] = 0;

    for(int i = 1; i < n; i++){
        int last = visited[ch[i]];
         if(last == -1 || i-curr > last){
             curr+=1;
             max_len = max(curr,max_len);
         } else{
             if(curr > max_len){
                 max_len = curr;
             }
             curr = i-last;
         }
         if(curr > max_len){
                 max_len = curr;
             }
         visited[ch[i]] = i;
    }
    cout << max_len << endl;
}
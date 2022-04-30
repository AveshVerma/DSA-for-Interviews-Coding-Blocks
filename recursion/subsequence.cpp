#include<bits/stdc++.h>
using namespace std;

void generate_substring(char* in,vector<string> &v, char* out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        //cout << out << " ";
        v.push_back(out);
        return;
    }
    out[j] = in[i];
    generate_substring(in,v, out, i+1, j+1);
    generate_substring(in,v, out, i+1, j);
}


int main(){
    char in[1000];
    char out[1000];
    cin >> in;
    vector<string> v;
    generate_substring(in,v, out, 0,0);
   for(int i = v.size()-1; i>=0;i--){
       cout << v[i] << " ";
   }
    cout << endl << v.size();
}
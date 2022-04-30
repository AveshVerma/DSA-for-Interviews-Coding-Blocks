#include<bits/stdc++.h>
using namespace std;

void permute(char *a, int i){
    if(a[i] == '\0'){
        cout << a << endl;
        return;
    }
    for(int j = i; j!='\0'; j++){
        swap(a[i], a[j]);
        permute(a, i+1);
        swap(a[j], a[i]);
    }
}

int main(){
    char a[1000];
    cin >> a;
    permute(a,0);

}
#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int e = a[i]; //copy bucket
        int j = i-1;
        while(j>=0 and a[j]>e){
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = e; // place in the empty space created / overwrite

    }
}


int main(){
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    insertion_sort(a,n);
    for(int i = 0; i < n; i++){cout << a[i] << " ";}
    
}
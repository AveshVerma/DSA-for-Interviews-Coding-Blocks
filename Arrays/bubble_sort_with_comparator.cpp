#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b){
    return a > b;
}

void bubble_sort(int a[], int n, bool (&comparator)(int a, int b)){

    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j <= (n-i-1); j++){
            // if(a[j] > a[j+1]){
            //     swap(a[j], a[j+1]);
            // }
            if(comparator(a[j], a[j+1])){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main(){
    int n; cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){ cin >> a[i];}
    bubble_sort(a,n, comparator);
    for(int i = 0; i < n; i++){cout << a[i] << " ";}
    
}
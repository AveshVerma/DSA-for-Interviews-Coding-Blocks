#include<iostream>
using namespace std;

void allIndices(int arr[], int i, int m, int n){
    if(i==n){
        return;
    }
    if(arr[i] == m){
        cout << i << " ";
    }
    allIndices(arr, i+1, m, n);
}

int main(){
    int n;cin >> n;
	int arr[n];
	for(int i  =0; i < n; i++){
		cin >> arr[i];
	}
	int m; cin >> m;
    allIndices(arr,0,m,n);
}
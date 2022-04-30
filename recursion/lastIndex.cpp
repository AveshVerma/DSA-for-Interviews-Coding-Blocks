#include<iostream>
using namespace std;

int lastIndex(int arr[], int ans, int i, int m, int n){
	if(i==n){
		return ans;
	}
	if(arr[i] == m){
		ans = max(ans, i);
	}
	return lastIndex(arr, ans, i+1, m, n);
}
int main() {
	int n;cin >> n;
	int arr[n];
	for(int i  =0; i < n; i++){
		cin >> arr[i];
	}
	int m; cin >> m;
	int ans = -1;
    ans = lastIndex(arr,ans, 0, m, n);
    cout << ans <<endl;
}   
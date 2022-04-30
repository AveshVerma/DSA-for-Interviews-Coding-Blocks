#include<bits/stdc++.h>
using namespace std;

int kadaneSum(int a[], int n){
    int curr_sum=0, max_sum = 0;
    for(int i = 0; i < n; i++){
        	curr_sum = curr_sum + a[i];
        	if(curr_sum <0){
            	curr_sum=0;
        	}
        	max_sum = max(max_sum, curr_sum);
    	}
		return max_sum;
}

int main(){
	int t;cin >> t;
	while(t--){
		int n; cin >> n;
    	int a[1000];
    	for(int i = 0; i < n; i++){ cin >> a[i];}
        int kadane = kadaneSum(a, n);
        int max_round = 0;
        for(int i = 0; i < n; i++){
            max_round = max_round + a[i];
            a[i] = -a[i];
        }
        max_round = max_round + kadaneSum(a,n);
        if(max_round > kadane){
            cout << max_round << endl;
        } else {
            cout << kadane << endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;
	while(t--){
		int n; cin >> n;
    	long long int a[100000];
    	long long int curr_sum=0, max_sum = 0;
    	for(int i = 0; i < n; i++){ cin >> a[i];}

    	for(int i = 0; i < n; i++){
        	curr_sum = curr_sum + a[i];
        	if(curr_sum <0){
            	curr_sum=0;
        	}
        	max_sum = max(max_sum, curr_sum);
    	}
		cout << max_sum << endl;
	}
    
    
}
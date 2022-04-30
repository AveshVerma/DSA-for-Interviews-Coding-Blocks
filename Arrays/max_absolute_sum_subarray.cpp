#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for(int i = 0; i < n; i++){
        	curr_sum = curr_sum + arr[i];
        	if(curr_sum < 0){
            	curr_sum= 0;
        	}
        	max_sum = max(max_sum,abs(curr_sum));
    	}
    int min_sum = INT_MAX;
    int curr_min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(curr_min > 0){
            curr_min = 0;
        } else{
            curr_min+=arr[i];
        }
        min_sum = min(min_sum, curr_min);
    }
    int ans = 0;
    ans = max(max_sum, abs(min_sum));
    cout << ans << endl;
}
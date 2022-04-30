#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& nums){
    int cnt = 0;
    for(int i:nums) if(i==0) cnt++;
    while(cnt--){
        if(nums[0] == 0 && nums[1] == 0) continue;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == 0) swap(nums[i], nums[i+1]);
        }
    }
}

void moveZerosOptimized(vector<int> &nums){
    int i = 0; 
    int j = 0;
    while(i<nums.size()){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
        i++;
    }
}

int main(){
    int n;cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    //moveZeros(v);
    moveZerosOptimized(v);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

}
#include<bits/stdc++.h>
using namespace std;

int next(vector<int> a, int i){
    return (i+a[i] + a.size())%a.size();
}

bool isCircularLoop(vector<int> nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int slow = i;
        int fast = i;
        if(nums[i] == 0){
            continue;
        }

        while(nums[slow]*nums[next(nums, slow)] > 0 && nums[fast]*nums[next(nums, fast)] > 0 && nums[fast]*nums[next(nums, next(nums, fast))] > 0){
            slow = next(nums, slow);
            fast = next(nums, next(nums, fast));

            if(slow == fast){
                //cycle is present
                if(slow == next(nums, slow)){
                    break;
                }
                return true;
            }
        }
        slow = i;
        int val = nums[slow];
        while(val*nums[slow] > 0){
            int x = slow;
            slow = next(nums, slow);
            nums[x] = 0;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    cout << isCircularLoop(v) << endl;
}
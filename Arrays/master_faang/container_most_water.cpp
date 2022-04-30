#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int height[n];
    for(int i=0;i<n;i++){
        cin >> height[i];
    }
    int area = 0;
    int left = 0;
    int right = n-1;
    while(left<right){
        area = max(area, min(height[left], height[right])*(right-left));
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    cout << area << endl;
}
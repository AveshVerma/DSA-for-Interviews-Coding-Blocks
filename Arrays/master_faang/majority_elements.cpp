#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long int threshold = floor(n/3);
    long long int ele1=arr[0];
    long long int ele2=0;
    long long int count_ele1=1;
    long long int count_ele2=0;
    for(long long int i = 1; i < n; i++){
        if(arr[i] == ele1){
            count_ele1++;
        } else if(arr[i] == ele2){
            count_ele2++;
        } else if(count_ele1==0){
            ele1 = arr[i];
            count_ele1=1;
        } else if(count_ele2==0){
            ele2=arr[i];
            count_ele2=1;
        } else{
            count_ele1--;
            count_ele2--; 
        }
    }
    count_ele1 = count_ele2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1) count_ele1++;
        else if(arr[i]==ele2) count_ele2++;
    }
    vector<int> ans;
    if(count_ele1 > threshold){
        ans.push_back(ele1);
    }
    if(count_ele2 > threshold){
        ans.push_back(ele2);
    }
    if(ans.size()==0){
        cout << "No Majority Elements" << endl;
    } else {
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }

}
#include<bits/stdc++.h>
using namespace std;
set<vector<int>> s;
void printCombinations(int *arr, vector<int> out, int i, int sum, int target, int n){
    if(i==n){
        if(sum==target){
            sort(out.begin(), out.end());
            s.insert(out);
        }
        return;
    }

    out.push_back(arr[i]);
    printCombinations(arr, out, i+1, sum+arr[i], target, n);
    out.pop_back();
    printCombinations(arr, out, i+1, sum, target, n);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int target; cin >> target;
    vector<int> out;
    printCombinations(a, out, 0, 0, target, n);
    for(auto itr=s.begin();itr!=s.end();itr++){
        vector<int> temp = *itr;
        for(auto i:temp){
            cout << i << " ";
        }
        cout << endl;
    }
}
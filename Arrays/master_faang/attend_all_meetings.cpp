#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> intervals;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        int s,e;
        cin >> s >> e;
        temp.push_back(s);
        temp.push_back(e);
        intervals.push_back(temp);
    }
    int ans = 1;
    for(int i = 1; i < intervals.size();i++){
        if(intervals[i][0] < intervals[i-1][1]){
            ans = 0;
        }
    }
    if(ans){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
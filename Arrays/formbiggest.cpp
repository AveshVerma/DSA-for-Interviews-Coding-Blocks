#include <bits/stdc++.h>
using namespace std;

static bool comparator(string &s1, string &s2){
        return (s1+s2 > s2+s1);
    }
string printLargest(vector<string> arr)
{
    string s;
    sort(arr.begin(), arr.end(), comparator);
    for(int i = 0; i < arr.size(); i++)
        s+=arr[i];
    return s;
}

int main()
{
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int arr[n];
        vector<string> arr_str;
        for(int i =0;i<n;i++){
            cin >> arr[i];
            arr_str.push_back(to_string(arr[i]));
        }
        string ans = printLargest(arr_str);
        
        cout << ans << endl;
    }
}
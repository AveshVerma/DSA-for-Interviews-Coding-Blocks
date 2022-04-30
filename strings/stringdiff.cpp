#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;cin >> s;
	string ans;
    int i;
	for(i = 0; i < s.length()-1;i++){
		ans += s[i];
        int ascii_diff = s[i+1] - s[i];
        ans += to_string(ascii_diff);
	}
    ans += s[i];
    cout << ans << endl;
}
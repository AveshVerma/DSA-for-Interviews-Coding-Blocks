#include<bits/stdc++.h>
using namespace std;

int update(int n){
    int x=0;
    while(n>0){
        int d = n%10;
        x = x+d*d;
        n/=10;
    }
    return x;
}

bool check(map<int, bool> m, int n){
    if(n==1){
        return true;
    }
    if(m.find(n)!= m.end()){
        return false;
    }
    m.insert(make_pair(n, true));
    n = update(n);
    return check(m,n);
}

bool isHappy(int n){
    map<int, bool> m;
    return check(m,n);
}

int main(){
    int n; cin >>n;
    bool ans= isHappy(n);
    if(ans){
		cout << "true" << endl;
	} else{
		cout << "false" << endl;
	}
}
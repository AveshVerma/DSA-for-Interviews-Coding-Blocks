#include<bits/stdc++.h>
using namespace std;


int maxXORInRange(int L, int R) 
{ 
    int LXR = L ^ R; 
  
    int msbPos = 0; 
    while (LXR) 
    { 
        msbPos++; 
        LXR >>= 1; 
    } 

    int maxXOR = 0; 
    int two = 1; 
    while (msbPos--) 
    { 
        maxXOR += two; 
        two <<= 1; 
    } 
  
    return maxXOR; 
} 

int main () {
    int x,y;
    cin >> x >> y;
    cout << maxXORInRange(x,y) << endl;
	return 0;
}
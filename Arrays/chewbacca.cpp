#include<bits/stdc++.h>
using namespace std;

int invertDigit(int n){
    return (9-n);
}
int formNumber(int arr[], int numOfDigit){
    int number = 0;
    for(int i = 0; i < numOfDigit; i++){
        number = number + (arr[i]*pow(10,numOfDigit-1-i));
    }
    return number;
}
int main(){
    int n; cin >> n;
    int a[1000];
    int num = n;
    int digit=0;
    int numOfDigit=floor(log10(n)+1);
    int i=0;
    while(num>0){
        digit=num%10;
        num/=10;
        a[numOfDigit-1-i]=digit;
        i++;
    }
    int number = formNumber(a, numOfDigit);
    int least = 0;
    for(int i = 0; i < numOfDigit;i++){
        cout << "a[i]: "  << a[i] << " 9-a[i]: " << 9-a[i] << endl;;
        if(a[i] < (9-a[i])){
            int curr = formNumber(a, numOfDigit);
            cout << curr << endl;
            if(curr < num){
                least = curr;
            }
        }
    }
    cout << least << endl;
}
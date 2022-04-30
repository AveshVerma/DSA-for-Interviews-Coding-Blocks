#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1, s2;

    public:
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop(){
        if(s1.empty()){
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
    int size(){
        return s1.size() + s2.size();
    }
    bool empty(){
        return (size() == 0);
    }
};
int main(){
    int n;
    cin >> n;
    Queue q;
    for(int i = 0; i < n; i++){
        q.push(i);
    }
    for(int i = 0; i < n; i++){
        cout << q.pop() << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    class Stack{
        queue<int> q1,q2;
        int x;
        public:
            void push(int x){
                q1.push(x);
            }
            void pop(){
                if(q1.empty()){
                    return;
                }
                while(q1.size()>1){
                    int ele = q1.front();
                    q2.push(ele);
                    q1.pop();
                }

                q1.pop();
                swap(q1,q2);
            }

            int top(){
                if(q1.empty()){
                    return -1;
                }
                while(q1.size()>1){
                    int ele = q1.front();
                    q2.push(ele);
                    q1.pop();
                    ele = q1.front();
                    q1.pop();
                    q2.push(ele);
                    swap(q1,q2);
                }
                return q2.front();
            }

            int size(){
                return q1.size() + q2.size();
            }

            bool isEmpty(){
                return (size() == 0);
            }
    };

    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout << s1.top() << endl;
}
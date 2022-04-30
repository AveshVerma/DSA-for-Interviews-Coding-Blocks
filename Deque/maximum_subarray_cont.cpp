    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin >> n;
        int k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        int i;
        deque<int> q(k); // window of size k
        for(i = 0; i < k; i++){
            while(!q.empty() && arr[i] > arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        for(;i<n;i++){
            cout << arr[q.front()] << " ";
            //remove element not part of window
            while((!q.empty() && (q.front() <= i-k))){
                q.pop_front();
            }
            // remove elements not useful and in window 
            while(!q.empty() && arr[i]>= arr[q.back()]){
                q.pop_back();
            }
            // add new elements ( expansion )
            q.push_back(i);
        }
        cout << arr[q.front()] << endl;
    }
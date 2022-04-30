#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> words;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        words.push_back(word);
    }
    string word1;
    string word2;
    cin >> word1 >> word2;
    int d1 = -1;
    int d2 = -1;
    int min_distance = words.size();
    for(int i = 0; i < words.size();i++){
        if(words[i] == word1){
            d1 = i;
        }
        if(words[i] == word2){
            d2 = i;
        }
        if(d1!= -1 && d2!=-1){
            min_distance = min(min_distance, abs(d1-d2));
        }
    }
    cout << min_distance << endl;
}
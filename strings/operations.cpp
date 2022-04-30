#include<bits/stdc++.h>
using namespace std;

int main(){
    //initialize string
    string s0;
    string s1("Hello");
    string s2 = "Must always be inside double quotes";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a', 'b','c', '\0'};

    string s5(a);

    if(s0.empty()){
        cout << "s0 is an empty string." << endl;
    }

    s0.append("I love C++");
    cout << s0 << endl;

    s0 += " and Python.";
    cout << s0 << endl;

    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    s0 = "Apple";
    s1 = "Mango";
    cout << s0.compare(s1) << endl; //returns an integer == 0 if strings are equal, >0 or <0(lexicographically

    //overloaded operators

    if(s0 < s1){
        cout << "mango is lexicographically greater than apple" << endl;
    }
    s1 > s0;
    cout << s1[0] << endl;

    //substrings

    string s = "i want apple juice";
    string word = "apple";
    int len = word.length();
    int idx = s.find("apple");
    cout << idx << endl;
    cout << s << endl;
    s.erase(idx, len+1);
    cout << s << endl;

    for(int i = 0; i < s1.length(); i++){
        cout << s1[i] << ":";
    }
    cout << endl;
    for(auto it = s.begin(); it!=s.end();it++){ // string::iterator is the defined iterator that auto changes to.
        cout << (*it) << endl;
    }

    for(auto c:s1){
        cout << c<<".";
    }
    cout << endl;

    //tokenization - breakikng on the basis of a delimiter
    char str[100] = "today is a rainy day";
    char *ptr = strtok(str, " ");
    cout << ptr << endl;

    ptr = strtok(NULL, " "); //if NULL is passed it returns next element
    cout << ptr << endl;
    ptr = strtok(NULL, " "); //if NULL is passed it returns next element
    cout << ptr << endl;
    // so we can use a loop
    char str1[100] = "today is a rainy day";
    char *ptr1 = strtok(str1, " ");
    cout << ptr1 << " ";
    while(ptr1!=NULL){
        ptr1= strtok(NULL, " ");
        cout << ptr1 << " ";
    }
}
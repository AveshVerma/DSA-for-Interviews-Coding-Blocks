#include<bits/stdc++.h>
using namespace std;

char *mystrtok(char *s, char delim){
    static char*input = NULL;
    if(s!=NULL){
        //making initial call to strtok
        input = s;
    }
    //base case
    if(input== NULL){
        return NULL;
    } // after the final token is taken care of

    char *output = new char[strlen(input) + 1];
    int i = 0;
    for(;input[i]!='\0'; i++){
        if(input[i]!=delim){
            output[i] = input[i];
        } else {
            output[i] = '\0';
            input = input + i+1;
            return output;
        }
    }

    //corner case: last token no space
    output[i] = '\0';
    input = NULL;
    return output;


}

int main(){
    char s[100] = "today, is a rainy, day";

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;

    while(ptr!=NULL){
        ptr = mystrtok(NULL,' ');
        cout << ptr << endl;
    }
}
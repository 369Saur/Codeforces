#include<bits/stdc++.h>
using namespace std;

string driver (string s) {
    int capital = 0 , small = 0 ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            capital++ ;
        }
        else{
            small++ ;
        }
    }
    if(capital > small){
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] -= 32 ;
            }
        }
    }
    else{
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32 ;
            }
        }
    }
    return s ;
}

int main() {
        string s ;
        cin >> s ;
        cout << driver(s) << endl;
    return 0;
}
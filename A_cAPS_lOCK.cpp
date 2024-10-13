#include<bits/stdc++.h>
using namespace std;

string solve(string &s){
    int flag = 0 ;
    if(s[0] >= 'a' && s[0] <= 'z'){
        flag = 1 ;
    }
    int count = 0 ;
    for(int i = 1 ; i < s.size() ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            count++ ;
        }
    }
    if(flag == 1 && count == s.size()-1){
        s[0] -= 32 ;
        for(int i = 1 ; i < s.size() ; i++){
            s[i] += 32 ;
        }
    }
    if(flag == 0 && count == s.size()-1){
        for(int i = 0 ; i < s.size() ; i++){
            s[i] += 32 ;
        }
    }
    return s ;
}

int main() {
    string s ;
    cin >> s ;
    cout << solve(s) ;
    return 0;
}
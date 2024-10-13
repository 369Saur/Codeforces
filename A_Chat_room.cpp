#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    int flag = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'h' && flag == 0){
            flag = 1 ;
        }
        if(s[i] == 'e' && flag == 1){
            flag = 2 ;
        }
        if(s[i] == 'l' && flag == 2){
            flag = 3 ;
        }
        else if(s[i] == 'l' && flag == 3){
            flag = 4 ;
        }
        if(s[i] == 'o' && flag == 4){
            flag = 5 ;
        }
    }
    if(flag == 5){
        return "YES" ;
    }
    return "NO" ;
}

int main() {
    string s ;
    cin >> s ;
    cout << solve(s) << endl ;
    return 0;
}
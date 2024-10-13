#include<bits/stdc++.h>
using namespace std;

string solve(string s){
    int n = s.size() ;
    if(s[0] != '1' || (s[n-1] != '1' && s[n-1] != '4')){
        return "NO" ;
    }
    for(int i = 1 ; i < n-1 ; i++){
        if(s[i] != '1' && s[i] != '4'){
            return "NO" ;
        }
        if(s[i] == '4' && s[i-1] == '4' && s[i+1] == '4'){
            return "NO" ;
        }
    }
    return "YES" ;
}

int main() {
    string s ;
    cin >> s ;
    cout << solve(s) << endl ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

string driver (string& s) {
    for(int i = 0 ; i < s.size() ; i++){
        s[i] = toupper(s[i]) ;
    }
    if(s == "YES"){
        return "YES" ;
    }
    return "NO" ;
}

int main() {
    int t; cin >> t;

    while(t--){
        string s ; 
        cin >> s ;
        cout << driver(s) << endl;
    }
    return 0;
}
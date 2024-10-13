#include<bits/stdc++.h>
using namespace std;

string driver (string s) {
    string ans = "" ;
    int n = s.size() ;
    if(n <= 10){
        return s ;
    }
    else{
        ans += (s[0] + to_string(n-2) + s[n-1]) ;
        return ans ;
    }
}

int main() {
    int t; cin >> t;

    while(t--) {
        string s ;
        cin >> s ;
        cout << driver(s) << endl ;
    }
    return 0;
}
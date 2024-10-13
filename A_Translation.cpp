#include<bits/stdc++.h>
using namespace std;

string driver (string& s , string& t) {
    reverse(s.begin() , s.end()) ;
    if(s == t){
        return "YES" ;
    }
    return "NO" ;
}

int main() {
    string s , t ;
    cin >> s >> t ;
    cout << driver(s , t) << endl ;
    return 0;
}
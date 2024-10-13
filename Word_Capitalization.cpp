#include<bits/stdc++.h>
using namespace std;

string driver (string s) {
    if(s[0] >=  'a' && s[0] <= 'z'){
        s[0] -= 32 ;
    }
    return s ;
}

int main() {
    string s ;
    cin >> s ;
    cout << driver(s) << endl ;
    return 0;
}
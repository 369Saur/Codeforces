#include<bits/stdc++.h>
using namespace std;
 
string driver (string s) {
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            return "YES" ;
        }
    }
    return "NO" ;
}
 
int main() {
    string s ;
    cin >> s ;
    cout << driver(s) << endl;
    return 0;
}
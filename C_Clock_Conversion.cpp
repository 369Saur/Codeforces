#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s ; cin >> s ;
    if(s[0] == '0' && s[1] == '0'){
        s[0] = '1' ;
        s[1] = '2' ;
        s += " AM" ;
    }
    else if(s[0] == '1' && s[1] == '2'){
        s[0] = '1' ;
        s[1] = '2' ;
        s += " PM" ; 
    }
    else if(s[0] == '1' && s[1] == '3'){
        s[0] = '0' ;
        s[1] = '1' ;
        s += " PM" ; 
    }
    else if(s[0] == '1' && s[1] == '4'){
        s[0] = '0' ;
        s[1] = '2' ;
        s += " PM" ;
    }
    else if(s[0] == '1' && s[1] == '5'){
        s[0] = '0' ;
        s[1] = '3' ;
        s += " PM" ;
    }
    else if(s[0] == '1' && s[1] == '6'){
        s[0] = '0' ;
        s[1] = '4' ;
        s += " PM" ;
    }
    else if(s[0] == '1' && s[1] == '7'){
        s[0] = '0' ;
        s[1] = '5' ;
        s += " PM" ;
    }
    else if(s[0] == '1' && s[1] == '8'){
        s[0] = '0' ;
        s[1] = '6' ;
        s += " PM" ;
    }
    else if(s[0] == '1' && s[1] == '9'){
        s[0] = '0' ;
        s[1] = '7' ;
        s += " PM" ;
    }
    else if(s[0] == '2' && s[1] == '0'){
        s[0] = '0' ;
        s[1] = '8' ;
        s += " PM" ;
    }
    else if(s[0] == '2' && s[1] == '1'){
        s[0] = '0' ;
        s[1] = '9' ;
        s += " PM" ;
    }
    else if(s[0] == '2' && s[1] == '2'){
        s[0] = '1' ;
        s[1] = '0' ;
        s += " PM" ;
    }
    else if(s[0] == '2' && s[1] == '3'){
        s[0] = '1' ;
        s[1] = '1' ;
        s += " PM" ;
    }
    else {
        s += " AM" ;
    }
    
    cout << s << endl  ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
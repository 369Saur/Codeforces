#include<bits/stdc++.h>
using namespace std;

void driver(string s) {
    int count = 0 ;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '4' || s[i] == '7'){
            count++ ;
        }
    }
    if(count == 4 || count == 7){
        cout << "YES" ;
    }
    else{
        cout << "NO" ;
    }
}

int main() {
    string s ; 
    cin >> s ;
    driver(s) ;
    return 0;
}
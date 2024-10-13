#include<bits/stdc++.h>
using namespace std ;

int main(){
    string str ;
    cin >> str ;
    string ans = "" ;
    int i = 0 ;
    while(str[i] != '\0'){
        if(str[i] == '-' && str[i+1] == '.'){
            ans += '1' ;
            i += 2 ;
        }
        else if(str[i] == '-' && str[i+1] == '-'){
            ans += '2' ;
            i += 2 ;
        }
        else{
            ans += '0' ;
            i++ ;
        }
    }
    cout << ans ;
    return 0 ;
}
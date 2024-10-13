#include<bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    cin >> s ;
    string ans = "" ;
    int i = 0 ;
    int flag = 0 ;
    while(i < s.size()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(flag == 0){
                ans += " " ;
            }
            flag = 1 ;
            i += 3 ;
            continue ;
        }
        else{
            flag = 0 ;
            ans += s[i] ;
            i++ ;
        }
    }
    cout << ans ;
    return 0;
}
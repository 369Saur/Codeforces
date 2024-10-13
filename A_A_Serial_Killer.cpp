#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string str1 , str2 ; 
    cin >> str1 >> str2 ;
    int n ; cin >> n ;
    cout << str1 << " " << str2 << endl ;
    string s1 , s2 ;
    while(n--){
        cin >> s1 >> s2 ;
        if(s1 == str1){
            cout << s2 << " " << str2 << endl ;
            str1 = s2 ;
        }
        else if(s1 == str2){
            cout << str1 << " " << s2 << endl ; 
            str2 = s2 ;
        }
    }
}

signed main() {
    solve() ;
    return 0;
}
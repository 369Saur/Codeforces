#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int count = 0 , flag = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '.'){
            continue ;
        }
        else if(s[i] == '@') count++ ;
        else if(s[i] == '*' && s[i+1] == '*') break ;
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
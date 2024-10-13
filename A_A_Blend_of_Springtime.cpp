#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s ; cin >> s ;
    int n = s.size() ;
    if(n <= 2){
        cout << "No" ;
        return ;
    }
    int i = 0 , j = 2 ;
    while(j < n){
        if(s.substr(i,j-i+1) == "ABC" || s.substr(i,j-i+1) == "ACB" ||
           s.substr(i,j-i+1) == "BAC" || s.substr(i,j-i+1) == "BCA" || 
           s.substr(i,j-i+1) == "CAB" || s.substr(i,j-i+1) == "CBA"){
            cout << "Yes" ;
            return ;
        }
        i++ ;
        j++ ;
    }
    cout << "No" ;
}

signed main() {
    solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    int i = 0 ; 
    while(i < n){
        if(s[i] == 'B'){
            break ;
        }
        i++ ;
    }
    int j = n-1 ;
    while(j >= 0){
        if(s[j] == 'B'){
            break ;
        }
        j-- ;
    }
    if(i == n && j == -1){
        cout << 0 << endl ;
        return ;
    }
    cout << j-i+1 << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
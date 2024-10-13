#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ; cin >> n ;
    vector<int> a(n) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    vector<int> b(n) ;
    for(int i = 0 ; i < n ; i++) cin >> b[i] ;
    vector<int> c = b ;
    reverse(c.begin(),c.end()) ;
    if(a == b || a == c) cout << "Bob" << endl ;
    else cout << "Alice" << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
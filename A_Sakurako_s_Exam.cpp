#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int a , b ;
    cin >> a >> b ;
    if(a == 0 && b % 2 == 0) cout << "YES" << endl ;    
    else if(a == 0 && b % 2 != 0) cout << "NO" << endl ;    
    else if(a % 2 == 0 ) cout << "YES" << endl ;
    else cout << "NO" << endl ;   
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
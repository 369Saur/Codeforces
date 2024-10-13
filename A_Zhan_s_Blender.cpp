#include<bits/stdc++.h>
using namespace std ;
#define int long long 

void solve(){
    int n ; cin >> n ;
    int x , y ;
    cin >> x >> y ;
    int ans = n/min(x,y) ;
    if(n % min(x,y) > 0) ans++ ;
    cout << ans << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
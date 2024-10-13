#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n ; cin >> n ;
    int maxi = INT_MIN ;
    int ans ;
    for(int i = 2 ; i <= n ; i++){
        int x = n/i ;
        int sum = i*(x*(x+1)/2) ;
        if(sum > maxi){
            maxi = sum ;
            ans = i ;
        }
    }
    cout << ans << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
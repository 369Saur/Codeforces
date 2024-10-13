#include<bits/stdc++.h>
#define int long long 
using namespace std ;

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int sum = 0 ;
    for(int i = 0 ; i < n-2 ; i++) sum += v[i] ;
    v[n-2] -= sum ;
    cout << v[n-1]-v[n-2] << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
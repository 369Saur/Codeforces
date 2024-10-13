#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;

    int mod = 1e9+7 ;

    for(int i = 1 ; i < n ; i++){
        if(v[i] > v[i-1]) continue ;
        else v[i] = (v[i]*(v[i-1]/v[i]+1))%mod ;
    }
    cout << v[n-1]%mod << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
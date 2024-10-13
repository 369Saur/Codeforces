#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> p(n) ;
    for(int i = 0 ; i < n ; i++) cin >> p[i] ;
    int m ; cin >> m ;
    vector<int> q(m) ;
    for(int i = 0 ; i < m ; i++) cin >> q[i] ;
    int e1 = 0 , o1 = 0 ;
    for(auto i : p){
        if(i%2) o1++ ;
        else e1++ ;
    }
    int e2 = 0 , o2 = 0 ;
    for(auto i :q){
        if(i%2) o2++ ;
        else e2++ ;
    }
    cout << e1*e2 + o1*o2 << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k  ;
    cin >> n >> m >> k ;
    vector<int> b(n) ; 
    vector<int> c(m) ;
    for(int i = 0 ; i < n ; i++) cin >> b[i] ; 
    for(int i = 0 ; i < m ; i++) cin >> c[i] ; 
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(b[i]+c[j] <= k) count++ ;
        }
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
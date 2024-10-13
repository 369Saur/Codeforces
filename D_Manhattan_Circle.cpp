#include<bits/stdc++.h>
using namespace std ;

void solve(){
    int n , m ;
    cin >> n >> m ;
    vector<vector<char>> v(n,vector<char>(m)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> v[i][j] ;
        }
    }
    int minix = INT_MAX ;
    int miniy = INT_MAX ;
    int maxix = INT_MIN ;
    int maxiy = INT_MIN ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(v[i][j] == '#'){
                minix = min(minix,i) ;
                miniy = min(miniy,j) ;
                maxix = max(maxix,i) ;
                maxiy = max(maxiy,j) ;
            }
        }
    }
    cout << (maxix+minix)/2+1 << " " << (maxiy+miniy)/2+1 << endl ;
 }

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
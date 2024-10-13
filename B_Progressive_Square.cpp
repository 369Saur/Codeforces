#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , c , d ;
    cin >> n >> c >> d ;
    vector<int> v(n*n) ;
    for(int i = 0 ; i < n*n ; i++) cin >> v[i] ;
    unordered_map<int,int> mp ;
    for(int i = 0 ; i < n*n ; i++) mp[v[i]]++ ;
    sort(v.begin() , v.end()) ;
    vector<vector<int>> mat(n,vector<int>(n)) ;
    int x = v[0] ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(j == 0) mat[i][j] = x ;
            else mat[i][j] = mat[i][j-1] + d ;
        }
        x += c ;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            // cout << mat[i][j] << " " ;
            if(mp.find(mat[i][j]) == mp.end()){
                cout << "NO" << endl ;
                return ;
            }
            mp[mat[i][j]]-- ;
            if(mp[mat[i][j]] == 0) mp.erase(mat[i][j]) ;
        }
    }
    // cout << endl ;
    cout << "YES" << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
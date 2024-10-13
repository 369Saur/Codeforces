#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m ;
    cin >> n >> m ;
    vector<vector<char>> v(n,vector<char>(m)) ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> v[i][j] ;
        }
    }
    vector<int> u(m) ;
    for(int i = 0 ; i < m ; i++) cin >> u[i] ;
    unordered_map<char,int> mp ;
    int max_score = 0 ;
    for(int j = 0 ; j < m ; j++){
        for(int i = 0 ; i < n ; i++){
            mp[v[i][j]]++ ;
        }
        int maxi = 0 ;
        for(auto k : mp){
            if(k.second > maxi) maxi = k.second ;
        }
        max_score += maxi*u[j] ;
        mp.clear() ;
    }
    cout << max_score ;
}

signed main() {
    solve() ;
    return 0;
}
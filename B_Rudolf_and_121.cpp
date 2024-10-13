#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    for(int i = 1 ; i < n-1 ; i++){
        if(v[i-1] <= v[i+1] && v[i] >= 2*v[i-1]){
            v[i+1] -= v[i-1] ;
            v[i] -= 2*v[i-1] ;
            v[i-1] = 0 ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(v[i] != 0){
            cout << "NO" << endl ;
            return ;
        }
    }
    cout << "YES" << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
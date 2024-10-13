#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    if(n == 1){
        cout << "YES" << endl ;
        return ;
    }
    int avg = 0 ;
    for(int i = 0 ; i < n ; i++) avg += v[i] ;
    avg /= n ;
    int x = avg ;
    for(int i = 0 ; i < n-1 ; i++){
        // cout << v[i] << " " ;
        if(v[i] < x){
            cout << "NO" << endl ;
            return ;
        }
        v[i+1] += (v[i]-x) ;
        v[i] = x ;
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i] != v[i+1]){
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
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    int sum = 0 ;
    for(int i = 1 ; i < n ; i++){
        sum += (v[i]-v[i-1]) ;
    }
    cout << sum << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
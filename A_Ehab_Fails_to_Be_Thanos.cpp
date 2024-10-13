#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(2*n) ;
    for(int i = 0 ; i < 2*n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    if(v[0] == v[2*n-1]) cout << -1 ;
    else{
        for(int i = 0 ; i < 2*n ; i++) cout << v[i] << " " ;
    }
}

signed main() {
    solve() ;
    return 0;
}
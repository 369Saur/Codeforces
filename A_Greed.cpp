#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> a(n) ;
    vector<int> b(n) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    for(int i = 0 ; i < n ; i++) cin >> b[i] ;
    int rem = 0 ;
    for(auto i : a) rem += i ;
    sort(b.begin() , b.end()) ;
    if(b[n-1]+b[n-2] >= rem) cout << "YES" ;
    else cout << "NO" ;
}

signed main() {
    solve() ;
    return 0;
}
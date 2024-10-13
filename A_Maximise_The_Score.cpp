#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(2*n) ;
    for(int i = 0 ; i < 2*n ; i++) cin >> v[i] ;
    sort(v.begin(),v.end()) ;
    int score = 0 ;
    for(int i = 1 ; i < 2*n ; i +=2) score += min(v[i],v[i-1]) ;
    cout << score << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n , k , x ;
    cin >> n >> k >> x ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    vector<int> pre(n+1) ;
    pre[0] = 0 ;
    for(int i = 1 ; i <= n ; i++) pre[i] = pre[i-1]+v[i-1] ;
    int ans = INT_MIN ;
    for(int i = 0 ; i <= k ; i++){
        int y = pre[max(0,n-x-i)]-(pre[max(0,n-i)]-pre[max(0,n-x-i)]) ;
        ans = max(ans , y) ;
    }
    cout << ans << endl ;
}

int main() {
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
    return 0;
}
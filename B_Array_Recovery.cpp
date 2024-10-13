#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> d(n) ;
    for(int i = 0 ; i < n ; i++) cin >> d[i] ;
    vector<int> ans(n,0) ;
    ans[0] = d[0] ;
    for(int i = 1 ; i < n ; i++){
        if(ans[i-1]-d[i] >= 0 && d[i] != 0){
            cout << -1 << endl ;
            return ;
        }
        ans[i] = ans[i-1]+d[i] ;
    }
    for(int i = 0 ; i < n ; i++) cout << ans[i] << " " ;
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
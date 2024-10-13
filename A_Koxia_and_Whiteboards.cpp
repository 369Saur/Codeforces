#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m ;
    cin >> n >> m ;
    vector<int> a(n) ;
    vector<int> b(m) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    for(int i = 0 ; i < m ; i++) cin >> b[i] ;
    sort(a.begin() , a.end()) ;;
    int sum = 0 ;
    for(int i = 0 ; i < m ; i++){
        a[0] = b[i] ;
        sort(a.begin() , a.end()) ;
    }
    for(int i = 0 ; i < n ; i++) sum += a[i] ;
    cout << sum << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m ;
    cin >> n >> m ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    string s ; cin >> s ;
    int prod = 1 ;
    int l = -1 , r = n ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'L') l++ ;
        else r-- ;
    }
    vector<int> ans ;
    for(int i = n-1 ; i >= 0 ; i--){
        if(s[i] == 'L' && l >= 0){
            prod *= v[l--] ;
            ans.push_back(prod%m) ;
            prod %= m ;
        }
        if(s[i] == 'R' && r <= n-1){
            prod *= v[r++] ;
            ans.push_back(prod%m) ;
            prod %= m ;
        }
    }
    reverse(ans.begin() , ans.end()) ;
    for(int i = 0 ; i < n ; i++) cout << ans[i] << " " ;
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    string s = "abcdefghijklmnopqrstuvwxyz" ;
    vector<int> mp(26,0) ;
    string ans = "" ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 26 ; j++){
            if(mp[j] == v[i]){
                ans += s[j] ;
                mp[j]++ ;
                break ;
            }
        }
    }
    cout << ans << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
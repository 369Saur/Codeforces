#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    set<int> s ;
    for(int i = 0 ; i < n ; i++) s.insert(v[i]) ;
    vector<int> v1 ;
    for(auto &i : s){
        v1.push_back(i) ;
    }
    int m = v1.size() ;
    int maxi = 0 ;
    int i = 0 , j = 0 ;
    while(j < m){
        while(abs(v1[j]-v1[i]) >= n){
            i++ ;
        }
        maxi = max(maxi,j-i+1) ;
        j++ ;
    }
    cout << maxi << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
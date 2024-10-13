#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k ;
    cin >> n >> m >> k ;
    vector<int> a(n) ;
    vector<int> b(m) ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    for(int i = 0 ; i < m ; i++) cin >> b[i] ;
    set<int> s1 ;
    set<int> s2 ;
    for(auto i : a){
        s1.insert(i) ;
    }
    for(auto i : b){
        s2.insert(i) ;
    }
    int count1 = 0 ;
    for(auto i : s1){
        if(i >= 1 && i <= k) count1++ ;
    }
    int count2 = 0 ;
    for(auto i : s2){
        if(i >= 1 && i <= k) count2++ ;
    }
    for(int i = 1 ; i <= k ; i++){
        if(s1.find(i) == s1.end() && s2.find(i) == s2.end()){
            cout << "NO" << endl ;
            return ;
        }
    }
    if(count1 >= k/2 && count2 >= k/2){
        cout << "YES" << endl ;
        return ;
    }
    cout << "NO" << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    unordered_map<int,int> mp ;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        mp[v[i]-i]++ ;
    }
    for(auto i : mp){
        count += i.second*(i.second-1)/2 ;
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
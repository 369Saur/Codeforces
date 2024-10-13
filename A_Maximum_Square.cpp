#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end() , greater<int>()) ;
    int maxi = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > maxi){
            maxi = i+1 ;
        }
    }
    cout << maxi << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
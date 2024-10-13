#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    vector<int> v(3) ;
    cin >> v[0] >> v[1] >> v[2] ;
    sort(v.begin() , v.end()) ;
    if(v[0]+v[1] == v[2]){
        cout << "YES" << endl ;
    }
    else{
        cout << "NO" << endl ;
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
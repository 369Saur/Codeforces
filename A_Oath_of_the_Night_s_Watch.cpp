#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin() , v.end()) ;
    int count = 0 ;
    for(int i = 1 ; i < n-1 ; i++){
        if(v[i] > v[0] && v[i] < v[n-1]) count++ ;
    }
    cout << count ;
}

signed main() {
    solve() ;
    return 0;
}
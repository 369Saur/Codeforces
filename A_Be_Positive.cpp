#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    int x = n/2 ;
    if(n%2){
        x++ ;
    }
    int plus = 0 , minus = 0 ;
    for(auto &i : v){
        if(i > 0) plus++ ;
        else if(i < 0) minus++ ;
    }
    if(plus >= x) cout << 1 ;
    else if(minus >= x) cout << -1 ;
    else cout << 0 ;
    return 0;
}
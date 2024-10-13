#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , k ;
    cin >> n >> k ;
    if(n == 1){
        cout << 1 << endl ;
        return ;
    }
    if(k <= 4*n-4){
        if(k%2) cout << k/2+1 << endl ;
        else cout << k/2 << endl ;
    }
    else{
        cout << k/2+1 << endl ;
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
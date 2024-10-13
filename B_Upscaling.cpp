#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    for(int i = 0 ; i < 2*n ; i++){
        for(int j = 0 ; j < n ; j++){
            if((i/2+j)%2 == 0) cout << "##" ;
            else cout << ".." ;
        }
        cout << endl ;
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
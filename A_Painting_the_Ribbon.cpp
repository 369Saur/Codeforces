#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k ;
    cin >> n >> m >> k ;
    if(m > 1 && k < n-1){
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
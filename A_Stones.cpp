#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a , b , c ;
    cin >> a >> b >> c ;
    int count = 0 ;
    while(c >= 2 && b >= 1){
        count += 3 ;
        c -= 2 ;
        b -= 1 ;
    }
    while(b >= 2 && a >= 1){
        count += 3 ;
        b -= 2 ;
        a -= 1 ;
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
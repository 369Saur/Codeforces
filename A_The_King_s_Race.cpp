#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ; 
    int x , y ;
    cin >> x >> y ;
    int wd = abs(x-1)+abs(y-1) ;
    int bd = abs(x-n)+abs(y-n) ;
    if(wd <= bd) cout << "White" ;
    else cout << "Black" ;
}

signed main() {
    solve() ;
    return 0;
}
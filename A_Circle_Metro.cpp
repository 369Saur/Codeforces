#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,x,b,y ;
    cin >> n >> a >> x >> b >> y ;
    while(a != x && b != y){
        if(a == b){
            break ;
        }
        a = a+1  ;
        b = b-1 ;
        if(a == n+1) a = 1 ;
        if(b == 0) b = n ; 
    }
    if(a == b) cout << "YES" ;
    else cout << "NO" ;
}

signed main() {
    solve() ;
    return 0;
}
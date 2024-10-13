#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int k , x , a ;
    cin >> k >> x >> a ;
    int maxi = k*x ;
    if(a >= maxi){
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
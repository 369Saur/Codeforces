#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , a , b ; 
    cin >> n >> a >> b ;
    if(b >= 2*a){
        cout << n*a << endl ;
        return ;
    }
    if(n % 2 == 0){
        cout << b*(n/2) << endl;
    }
    else{
        cout << b*(n/2)+a << endl ;
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
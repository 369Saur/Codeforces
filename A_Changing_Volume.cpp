#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a , b ;
    cin >> a >> b ;
    int x = abs(a-b) ;
    int count = 0 ;
    while(x){
        if(x >= 5){
            count += x/5 ;
            x %= 5 ;
        }
        if(x >= 2){
            count += x/2 ;
            x %= 2 ;
        }
        if(x >= 1){
            count += x/1 ;
            x %= 1 ;
        }
    }
    cout << count << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
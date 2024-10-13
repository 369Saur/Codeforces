#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    int i = 1 , j = n ;
    for(int k = 1 ; k <= n ; k++){
        if(k%2){
            cout << j << " " ;
            j-- ;
        }
        else{
            cout << i << " " ;
            i++ ;
        }
    }
    cout << endl ;
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
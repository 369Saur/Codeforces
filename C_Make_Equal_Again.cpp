#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    if(n == 1 || (n == 2 && v[0] == v[1])){
        cout << 0 << endl ;
        return ;
    }
    if(n == 2 && v[0] != v[1]){
        cout << 1 << endl ;
        return ;
    }
    int i = 0 , j = n-1 , x = 1 ;
    while(x < j){
        if(v[i] != v[j] && v[i] != v[x]){
            cout << j-i+1 << endl ;
            return ;
        }
        else if(v[i] == v[j] && v[i] != v[x]){
            j-- ;
        }
        else if(v[i] == v[j] && v[i] == v[x]){
            x++ ;
        }
    }
}

signed main() {
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0;
}
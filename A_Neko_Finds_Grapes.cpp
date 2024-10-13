#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
}

signed main() {
    int n , m ;
    cin >> n >> m ;
    vector<int> c(n) ;
    vector<int> k(m) ;
    for(int i = 0 ; i < n ; i++) cin >> c[i] ;
    for(int i = 0 ; i < m ; i++) cin >> k[i] ;
    int even = 0 , odd = 0 ;
    for(int i = 0 ; i < min(m,n) ; i++){
        if(c[i]%2) odd++ ;
        else even++ ;
        if(k[i]%2) odd++ ;
        else even++ ;
    }
    for(int i = min(m,n) ; i < max(m,n) ; i++){
        if(n>m){
            if(c[i]%2) odd++ ;
            else even++ ;
        }
        else{
            if(k[i]%2) odd++ ;
            else even++ ;
        }
    }
    int mini = min(even,odd) ;
    if(mini >= m || mini >= n) cout << min(m,n) ;
    else cout << mini ;
    return 0;
}
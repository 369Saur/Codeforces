#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n , m , k ;
    cin >> n >> m >> k ;
    m -= 1 ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ; 
    int i = m-1 , j = m+1 ;
    int ld = 0 , rd = 0 ;
    while(i >= -1){
        if(i == -1){
            ld = INT_MAX ;
            break ;
        }
        else if( v[i] <= k && v[i] != 0){
            ld += 10 ;
            break ;
        }
        else{
            ld += 10 ;
        }
        i-- ;
    }
    while(j <= n){
        if(j == n){
            rd = INT_MAX ;
            break ;
        }
        else if( v[j] <= k && v[j] != 0){
            rd += 10 ;
            break ;
        }
        else{
            rd += 10 ;
        }
        j++ ;
    }
    cout << min(ld,rd) ;
}

signed main() {
    solve() ;
    return 0;
}
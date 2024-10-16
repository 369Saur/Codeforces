#include<bits/stdc++.h>
#define int long long
using namespace std ;

void solve(){
    int n , k ;
    cin >> n >> k ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    sort(v.begin(),v.end()) ;
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++) sum += v[i] ;
    for(int i = 0 ; i < 2*k ; i++) sum -= v[i] ;
    int maxi = sum ;
    int j = n-1 ;
    for(int i = 2*k-1 ; i > 0 ; i -= 2){
        sum += (v[i]+v[i-1]) ;
        sum -= v[j--] ;
        maxi = max(maxi,sum) ;
    }
    cout << maxi << endl ;
}

signed main(){
    int t ; cin >> t ;
    while(t--) solve() ;
    return 0 ;
}
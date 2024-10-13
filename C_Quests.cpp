#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(){
    int n , k ;
    cin >> n >> k ;
    vector<int> a(n) ;
    vector<int> b(n) ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i] ;
    }
    int sum = 0 , maxi = 0 , total_exp = 0 ;
    for(int i = 0 ; i < n && i < k ; i++){
        sum += a[i] ;
        maxi = max(maxi , b[i]) ;
        total_exp = max(total_exp , sum+(k-i-1)*maxi) ;
    }
    return total_exp ;
}

signed main() {
    int t ; cin >> t ;
    while(t--){
        cout << solve() << endl ;
    }
    return 0;
}
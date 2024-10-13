#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int& qi , vector<int>& x , int& n){
    int s = 0 , e = n-1 , m ;
    while(s <= e){
        m = s + (e-s)/2 ;
        if(x[m] <= qi) s = m+1 ;
        else e = m-1 ;
    }
    return e+1 ;
}

signed main() {
    int n ; cin >> n ;
    vector<int> x(n) ;
    for(int i = 0 ; i < n ; i++) cin >> x[i] ;
    sort(x.begin() , x.end()) ;
    int q ; cin >> q ;
    int qi ;
    while(q--){
        cin >> qi ;
        cout << solve(qi,x,n) << endl ;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int n , int k , int t){
    if(t <= k){
        return t ;
    }
    if(t > k && t <= n){
        return k ;
    }
    if(t > n){
        int x = k-(t-n) ;
        if(x <= 0) return 0 ;
        return x ;
    }
}

signed main() {
    int n , k , t ;
    cin >> n >> k >> t ;
    cout << solve(n,k,t) ;
    return 0;
}
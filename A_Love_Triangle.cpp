#include<bits/stdc++.h>
using namespace std;
#define int long long

string solve(int n , vector<int> v){
    for(int i = 0 ; i < n ; i++){
        int a = v[i] , b = v[a-1] , c = v[b-1] , d = v[c-1] ;
        if(a == d){
            return "YES" ;
        }
    }
    return "NO" ;
}

signed main() {
    int n ; cin >> n ;
    vector<int> v(n) ;
    for(int i = 0 ; i < n ; i++) cin >> v[i] ;
    cout << solve(n,v) << endl ;
    return 0;
}
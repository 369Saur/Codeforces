#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& v , int n){
    int x = v[0] ;
    for(int i = 1 ; i < n ; i++){
        x = __gcd(x , v[i]) ;
    }
    return v[n-1] / x ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> v(n) ;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i] ;
        }
        cout << solve(v , n) << endl ;
    }
    return 0;
}
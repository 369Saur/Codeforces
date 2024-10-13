#include<bits/stdc++.h>
using namespace std;
#define int long long

string solve(){
    int n ; cin >> n ;
    if(n == 1) return "O" ;
    if(n == 2) return "OO" ;
    vector<int> v(n,0) ;
    v[0] = 1 ;
    v[1] = 2 ;
    int i = 0 , j = 1 , k = 1 ;
    while(i+j+1 < n){
        v[i+j+1] = v[i]+v[j] ;
        j = i+j+1 ;
        i = k ;
        k = j ;
    }
    string ans = "" ;
    for(int i = 0 ; i < n ; i++){
        if(v[i] != 0){
            ans += 'O' ;
        }
        else{
            ans += 'o' ;
        }
    }
    return ans ;
}

signed main() {
    cout << solve() ;
    return 0;
}